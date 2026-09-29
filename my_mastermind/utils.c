#include "utils.h"
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

char *generate_random_code() {
    char *code = malloc(5);
    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        code[i] = '0' + (rand() % 9);
    }
    code[4] = '\0';
    return code;
}

char *read_guess() {
    char *guess = malloc(5);
    char c;
    int i = 0;

    while (read(0, &c, 1) > 0 && c != '\n') {
        if (i < 4 && c >= '0' && c <= '8') {
            guess[i++] = c;
        } else {
            free(guess);
            return NULL;
        }
    }

    if (i != 4) {
        free(guess);
        return NULL;
    }

    guess[4] = '\0';
    return guess;
}