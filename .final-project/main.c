#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

#define MAX_NAME 50
#define SAVE_FILE "caro_save.txt"
#define SCORE_FILE "caro_scores.txt"

int SIZE = 15;
char **board;
char player1[MAX_NAME], player2[MAX_NAME];
int score1 = 0, score2 = 0, turn = 0;

void play_game();

void free_board() {
    for (int i = 0; i < SIZE; i++) {
        free(board[i]);
    }
    free(board);
}

void init_board() {
    board = (char **)malloc(SIZE * sizeof(char *));
    for (int i = 0; i < SIZE; i++) {
        board[i] = (char *)malloc(SIZE * sizeof(char));
        memset(board[i], '.', SIZE);
    }
}

void print_board() {
    system(CLEAR_SCREEN);
    printf("\n   ");
    for (int i = 0; i < SIZE; i++) printf("%2d ", i);
    printf("\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%2d ", i);
        for (int j = 0; j < SIZE; j++) printf(" %c ", board[i][j]);
        printf("\n");
    }
}

int check_win(int row, int col, char symbol) {
    int directions[4][2] = {{0, 1}, {1, 0}, {1, 1}, {1, -1}};
    for (int d = 0; d < 4; d++) {
        int count = 1;
        for (int i = 1; i < 5; i++) {
            int r = row + directions[d][0] * i;
            int c = col + directions[d][1] * i;
            if (r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == symbol) count++;
            else break;
        }
        for (int i = 1; i < 5; i++) {
            int r = row - directions[d][0] * i;
            int c = col - directions[d][1] * i;
            if (r >= 0 && r < SIZE && c >= 0 && c < SIZE && board[r][c] == symbol) count++;
            else break;
        }
        if (count >= 5) return 1;
    }
    return 0;
}

int check_tie() {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == '.') return 0;
    return 1;
}

void show_winner(char *winner_name) {
    printf("\n\nCongratulations, %s!\n", winner_name);
    printf("You win the game!\n");
    printf("=====================================\n");
    printf("%s is the Winner!\n", winner_name);
    printf("=====================================\n");
}

void save_game() {
    FILE *f = fopen(SAVE_FILE, "w");
    if (!f) {
        printf("Error saving game!\n");
        return;
    }
    fprintf(f, "%d %s %s %d\n", SIZE, player1, player2, turn);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) fprintf(f, "%c", board[i][j]);
        fprintf(f, "\n");
    }
    fclose(f);
    printf("Game saved successfully!\n");
}

void load_game() {
    FILE *f = fopen(SAVE_FILE, "r");
    if (!f) {
        printf("No saved game found!\n");
        return;
    }
    fscanf(f, "%d %s %s %d", &SIZE, player1, player2, &turn);
    init_board();
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            fscanf(f, " %c", &board[i][j]);
    fclose(f);
    printf("Game loaded successfully!\n");
    play_game();
}

void save_score() {
    FILE *f = fopen(SCORE_FILE, "a");
    if (!f) {
        printf("Error saving scores!\n");
        return;
    }
    fprintf(f, "%s (%d) - %s (%d) | Board size: %dx%d\n", player1, score1, player2, score2, SIZE, SIZE);
    fclose(f);
}

void show_top_players() {
    FILE *f = fopen(SCORE_FILE, "r");
    if (!f) {
        printf("No scores recorded yet.\n");
        return;
    }
    printf("Top Players:\n");
    char line[100];
    while (fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }
    fclose(f);
}

void show_instructions() {
    system(CLEAR_SCREEN);
    printf(" == GAME INSTRUCTIONS == \n");
    printf("1. Choose board size (15x15 or 19x19).\n");
    printf("2. Players take turns entering row & column numbers.\n");
    printf("3. The first player to align 5 symbols wins!\n");
    printf("4. Press (-1) anytime to save & exit.\n");
    printf("\nPress ENTER to return to the menu...");
    while (getchar() != '\n');
    getchar();
}

void play_game() {
    do {
        printf("Choose board size (15 or 19): ");
        int choice;
        if (scanf("%d", &choice) == 1 && (choice == 15 || choice == 19)) {
            SIZE = choice;
        } else {
            SIZE = 15;
            printf("Invalid input, using default board size: 15x15\n");
        }
        while (getchar() != '\n');
    } while (SIZE != 15 && SIZE != 19);

    init_board();
    printf("Enter player 1 name: ");
    scanf("%s", player1);
    printf("Enter player 2 name: ");
    scanf("%s", player2);

    int x, y;
    char symbols[2] = {'X', 'O'};
    turn = 0;

    while (1) {
        print_board();
        do {
            printf("%s (%c), enter row and column: ", turn == 0 ? player1 : player2, symbols[turn]);
            if (scanf("%d %d", &x, &y) != 2) {
                printf("Invalid input! Please try again.\n");
                while(getchar() != '\n');
                continue;
            }
            if (x == -1) {
                save_game();
                return;
            }
            if (x < 0 || x >= SIZE || y < 0 || y >= SIZE || board[x][y] != '.') {
                printf("Invalid move! Please try again.\n");
            } else {
                break;
            }
        } while (1);

        board[x][y] = symbols[turn];

        if (check_win(x, y, symbols[turn])) {
            print_board();
            save_score();
            show_winner(turn == 0 ? player1 : player2);
            return;
        }

        if (check_tie()) {
            print_board();
            printf("It's a tie!\n");
            return;
        }

        turn = 1 - turn;
    }
}

int main() {
    int choice;
    do {
        printf("\nCARO GAME\n");
        printf("-------------------\n");
        printf("1. Play Game\n");
        printf("2. Load Game\n");
        printf("3. Show Top Players\n");
        printf("4. Instructions\n");
        printf("5. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                play_game();
                break;
            case 2:
                load_game();
                break;
            case 3:
                show_top_players();
                break;
            case 4:
                show_instructions();
                break;
            case 5:
                printf("Exiting game. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number from 1 to 5.\n");
        }
    } while (choice != 5);

    return 0;
}
