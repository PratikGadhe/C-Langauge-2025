#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int actualNumber, guess, difference;

    // Initialize random seed
    srand(time(0));
    actualNumber = (rand() % 100) + 1; // random number between 1 and 100

    // Loop until the correct guess
    do {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);

        // Calculate the difference
        difference = abs(actualNumber - guess);

        // Give feedback
        if (difference == 0) {
            printf("Congratulations! You guessed the correct number!\n");
        } else if (difference <= 5) {
            printf("Very close!\n");
        } else if (difference <= 10) {
            printf("Close!\n");
        } else if (difference <= 20) {
            printf("Not too far.\n");
        } else if (difference <= 40) {
            printf("Far.\n");
        } else {
            printf("Very far!\n");
        }

    } while (guess != actualNumber);

    return 0;
}