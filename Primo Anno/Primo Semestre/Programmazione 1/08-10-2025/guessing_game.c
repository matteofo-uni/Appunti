#include <stdio.h>
#define SECRET 42

int main() {
    int guess;
    printf("Guess the number! ");
    scanf("%d", &guess);

    if (guess == SECRET) {
        printf("You guessed right!\n");
    } else if (guess < SECRET) {
        printf("Higher!\n");
    } else if (guess > SECRET) {
        printf("Lower!\n");
    }

    return 0;
}