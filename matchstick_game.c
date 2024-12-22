#include <stdio.h>

int main() {
    int matchsticks = 21, user_pick, computer_pick;

    printf("Welcome to the Matchstick Game!\n");
    printf("There are 21 matchsticks. You can pick 1, 2, 3 or 4\n");

    while (matchsticks > 0) {
        printf("\nIt's your turn. How many matchsticks do you pick?\t The reamining matchstick are %d\n", matchsticks);
        scanf("%d", &user_pick);

        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid input. Please choose between 1 and 4.\n");
            continue;
        }

        matchsticks -= user_pick;

        if (matchsticks <= 0) {
            printf("You lose!\n");
            break;
        }

        printf("Computer's turn. Computer picks %d matchsticks.\n", 5 - user_pick);
        matchsticks -= 5 - user_pick;
    }

    if (matchsticks > 0) {
        printf("Computer wins!\n");
    }

    return 0;
}