#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandom(int max) {
    return (rand() % (max - 1 + 1)) + 1;

}

int power(int base, int n) {
    int p;

    for (p = 1; n > 0; n--) {
        p = p * base;
    }

    return p;
    
}

int main() {
    int inputNumber, mysteriousNumber, tries, max, level;
    int keepPlaying = 1;

    printf("Which level would you like to play ?\n'1' / '2' / '3'\n");
    scanf("%d", &level);
    max = power(10, (level + 1));

    srand(time(NULL));
    mysteriousNumber = generateRandom(max);

    while (keepPlaying) {
        printf("What's the mysterious number ? ");
        scanf("%d", &inputNumber);
        tries++;

        if (inputNumber > mysteriousNumber) {
            printf("It's less than %d\n", inputNumber);

        } else if (inputNumber < mysteriousNumber) {
            printf("It's more than %d\n", inputNumber);

        } else {
            printf("You won after %d tries!\n", tries);

            printf("Do you want to play again ? '1' for yes & '0' for no\n");
            scanf("%d", &keepPlaying);
            mysteriousNumber = (keepPlaying == 1) ? generateRandom(max): 0;
            tries = 0;

        }
    }
    
    return 0;
};