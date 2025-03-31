#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_SIZE 3
int difficulty;

typedef struct  {
    int player_won;
    int computer_won;
    int draw;
} Score;
Score score = {.player_won = 0,.computer_won = 0,.draw = 0};

void difficulty_check();
void clear_screen();
void print_board(char board[BOARD_SIZE][BOARD_SIZE]);
int check_win(char board[BOARD_SIZE][BOARD_SIZE], char symbol);
int is_board_full(char board[BOARD_SIZE][BOARD_SIZE]);
void player_move(char board[BOARD_SIZE][BOARD_SIZE]);
void computer_move(char board[BOARD_SIZE][BOARD_SIZE]);
void asian_computer_move(char board[BOARD_SIZE][BOARD_SIZE]);

int main() {
    char board[BOARD_SIZE][BOARD_SIZE] = {
        {' ',' ',' '},
        {' ',' ',' '},
        {' ',' ',' '}
    };
    srand(time(NULL));

    while(1) {
        difficulty_check();
        int game_over = 0;

        while(!game_over) {
            print_board(board);
            printf("\nYour turn (X)!\n");
            player_move(board);

            if(check_win(board, 'X')) {
                print_board(board);
                printf("\nYou won!\n");
                score.player_won++;
                game_over = 1;
                continue;
            }

            if(is_board_full(board)) {
                print_board(board);
                printf("\nIt's a draw!\n");
                score.draw++;
                game_over = 1;
                continue;
            }

            print_board(board);
            printf("\nComputer's turn (O)...\n");

            if(difficulty == 1) {
                computer_move(board);
            } else {
                asian_computer_move(board);
            }

            if(check_win(board, 'O')) {
                print_board(board);
                printf("\nComputer won!\n");
                score.computer_won++;
                game_over = 1;
                continue;
            }

            if(is_board_full(board)) {
                print_board(board);
                printf("\nIt's a draw!\n");
                score.draw++;
                game_over = 1;
            }
        }

        char play_again;
        printf("\nPlay again? (y/n): ");
        scanf(" %c", &play_again);
        if(play_again != 'y' && play_again != 'Y') {
            break;
        }

        for(int i = 0; i < BOARD_SIZE; i++) {
            for(int j = 0; j < BOARD_SIZE; j++) {
                board[i][j] = ' ';
            }
        }
    }
    return 0;
}

void difficulty_check() {
    while (1){
        printf("Select difficulty level: \n");
        printf("1. Human (Standard)\n");
        printf("2. Asian (Impossible to win)\n");
        printf("Enter your choice: ");
        scanf("%d", &difficulty);

        if (difficulty != 1 && difficulty !=2) {
            printf("Incorrect choice. Choose (1/2)!!\n");
            continue;
        }else {
            break;
        }
    }
}

void clear_screen() {
    #ifdef _Win32
        system("cls");
    #else
        system("clear");
    #endif
}

void print_board (char board[BOARD_SIZE][BOARD_SIZE]) {
    clear_screen();
    printf("Score - Player X: %d, Computer: %d, Draws: %d\n", score.player_won, score.computer_won, score.draw);
    printf("Tic-Tac-Toe\n");
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("\n");
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1) {
                printf("|");
            }
        }
        if (i < BOARD_SIZE - 1) {
            printf("\n---+---+---");
        }
    }
}

int check_win(char board[BOARD_SIZE][BOARD_SIZE], char symbol) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        if(board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) {
            return 1;
        }
    }

    for(int i = 0; i < BOARD_SIZE; i++) {
        if(board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol) {
            return 1;
        }
    }

    if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
        return 1;
    }
    if(board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
        return 1;
    }

    return 0;
}

int is_board_full(char board[BOARD_SIZE][BOARD_SIZE]) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            if(board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

void player_move(char board[BOARD_SIZE][BOARD_SIZE]) {
    int row, col;
    while(1) {
        printf("Enter row (1-3) and column (1-3): ");
        scanf("%d %d", &row, &col);
        row--; col--;

        if(row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == ' ') {
            board[row][col] = 'X';
            break;
        } else {
            printf("Invalid move! Try again.\n");
        }
    }
}

void computer_move(char board[BOARD_SIZE][BOARD_SIZE]) {
    int row, col;
    do {
        row = rand() % BOARD_SIZE;
        col = rand() % BOARD_SIZE;
    } while(board[row][col] != ' ');

    board[row][col] = 'O';
}

void asian_computer_move(char board[BOARD_SIZE][BOARD_SIZE]) {
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            if(board[i][j] == ' ') {
                board[i][j] = 'O';
                if(check_win(board, 'O')) {
                    return;
                }
                board[i][j] = ' ';
            }
        }
    }

    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            if(board[i][j] == ' ') {
                board[i][j] = 'X';
                if(check_win(board, 'X')) {
                    board[i][j] = 'O';
                    return;
                }
                board[i][j] = ' ';
            }
        }
    }

    // Take center if available
    if(board[1][1] == ' ') {
        board[1][1] = 'O';
        return;
    }

    // Take corners if available
    if(board[0][0] == ' ') {
        board[0][0] = 'O';
        return;
    }
    if(board[0][2] == ' ') {
        board[0][2] = 'O';
        return;
    }
    if(board[2][0] == ' ') {
        board[2][0] = 'O';
        return;
    }
    if(board[2][2] == ' ') {
        board[2][2] = 'O';
        return;
    }

    // Take any available spot
    for(int i = 0; i < BOARD_SIZE; i++) {
        for(int j = 0; j < BOARD_SIZE; j++) {
            if(board[i][j] == ' ') {
                board[i][j] = 'O';
                return;
            }
        }
    }
}

