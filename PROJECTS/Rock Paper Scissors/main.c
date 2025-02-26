// Feb 26, 2025



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Instruction for playing this rock paper scissors game:\n");
    printf("1. Choose 0 for rock, 1 for paper, or 2 for scissors.\n");
    printf("2. The computer will randomly choose rock, paper, or scissors.\n");
    printf("3. Rock beats scissors, scissors beats paper, and paper beats rock.\n");
    printf("4. If both players choose the same option, it's a tie.\n");
    printf("5. The player with the winning choice wins the round.\n");
    printf("\n");
    printf("\n");
    printf("\n");

    // Here is the main code

    int wanna_play_again = 1;

    while (wanna_play_again) {
        const char *choice_array[] = {"Rock", "Paper", "Scissors"};

        srand(time(NULL));
        int computer_choice = rand() % 3;
        int player_choice;
        printf("Enter your choice (0 for rock, 1 for paper, 2 for scissors): ");
        scanf("%d", &player_choice);
        printf("\n");

        printf("Computer choosed: %d (%s)\n", computer_choice, choice_array[computer_choice]);
        printf("You choosed: %d (%s)\n", player_choice, choice_array[player_choice]);


        if (computer_choice == player_choice) {
            printf("It's a tie!\n");
        } else if ((computer_choice == 0 && player_choice == 2) ||
                (computer_choice == 1 && player_choice == 0) ||
                (computer_choice == 2 && player_choice == 1)) {
            printf("Computer wins!\n");
        } else {
            printf("You win!\n");
        }




        printf("\n");
        printf("Do you want to play again? (1 for yes, 0 for no): ");
        scanf("%d", &wanna_play_again);

        if (wanna_play_again == 0) {
            printf("Thank you for playing!\n");
            break;
        }else {
            printf("\n");
        }
    }


    return 0;
}

