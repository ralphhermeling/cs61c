#include <stdio.h>

#define NUM_CHARACTERS 26

int main() {
    int c;
    int i;
    int nchar[NUM_CHARACTERS];

    for (i = 0; i < NUM_CHARACTERS; i++) {
        nchar[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++nchar[c - 'a'];
        }
    }

    for (int i = 0; i < NUM_CHARACTERS; i++) {
        if (nchar[i] == 0) {
            continue;
        }

        for (int j = 0; j < nchar[i]; j++) {
            printf("-");
        }
        printf("\n");
    }

    return 0;
}
