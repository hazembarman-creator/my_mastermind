#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "game_logic.h"
#include "utils.h"

int main(int argc, char *argv[]) {
    char *secret_code = NULL;
    int attempts = 10;

    // Parse command-line arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-c") == 0 && i + 1 < argc) {
            secret_code = argv[i + 1];
            i++;
        } else if (strcmp(argv[i], "-t") == 0 && i + 1 < argc) {
            attempts = atoi(argv[i + 1]);
            i++;
        }
    }

    // If no secret code is provided, generate a random one
    if (secret_code == NULL) {
        secret_code = generate_random_code();
    }

    printf("Will you find the secret code?\n");
    printf("Please enter a valid guess\n");

    // Game loop
    for (int round = 0; round < attempts; round++) {
        printf("---\nRound %d\n>", round);
        char *guess = read_guess();
        if (guess == NULL) {
            printf("Wrong input!\n");
            continue;
        }

        int well_placed = count_well_placed_pieces(secret_code, guess);
        int misplaced = count_misplaced_pieces(secret_code, guess);

        printf("Well placed pieces: %d\n", well_placed);
        printf("Misplaced pieces: %d\n", misplaced);

        if (well_placed == 4) {
            printf("Congratz! You did it!\n");
            free(guess);
            break;
        }

        free(guess);
    }

    if (secret_code != NULL && strcmp(argv[1], "-c") != 0) {
        free(secret_code);
    }

    return 0;
}