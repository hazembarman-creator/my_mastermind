#include "game_logic.h"
#include <string.h>

int count_well_placed_pieces(const char *secret, const char *guess) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (secret[i] == guess[i]) {
            count++;
        }
    }
    return count;
}

int count_misplaced_pieces(const char *secret, const char *guess) {
    int count = 0;
    char secret_copy[5], guess_copy[5];
    strcpy(secret_copy, secret);
    strcpy(guess_copy, guess);

    for (int i = 0; i < 4; i++) {
        if (secret_copy[i] == guess_copy[i]) {
            secret_copy[i] = 'x';
            guess_copy[i] = 'x';
        }
    }

    for (int i = 0; i < 4; i++) {
        if (secret_copy[i] != 'x') {
            for (int j = 0; j < 4; j++) {
                if (guess_copy[j] != 'x' && secret_copy[i] == guess_copy[j]) {
                    count++;
                    guess_copy[j] = 'x';
                    break;
                }
            }
        }
    }

    return count;
}