#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
char board[3][3];
void computermove();
void initializeBoard();
void printBoard();
bool isGameOver();
char getWinner();
int main(){
    srand(time(0));
    int currentPlayer=1,n=1;
    initializeBoard();
    int row, col;
    while(n=1){
    printf("Current board state:\n");
        printBoard();
        printf("your turn");
        scanf("%d %d", &row, &col);  
 if(row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            printf("Invalid move, please try again.\n");
        } else {
                board[row - 1][col - 1] = 'X';
            }
            printf("Computer Turn\n");
            computermove();   
if(isGameOver()) {
            printf("Game over!\n");
            printBoard();
            char winner = getWinner();
            if (winner == 'O') {
                printf("Computer Wins!\n");
                break;
            } else if(winner == 'X') {
                printf("You Win!\n");
                break;
            } else {
                printf("It's a Draw!\n");
    
            break;
        } 
}
} }
void computermove(){
    int row,col;
    do{
     row=((rand()%3)+1);
     col=((rand()%3)+1);
    }
    while(row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ');
    board[row - 1][col - 1] = 'O';
}
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}
void printBoard() {
    printf("\n");
    printf("  1   2   3\n");
    printf("1 %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("  ---------\n");
    printf("2 %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("  ---------\n");
    printf("3 %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}
bool isGameOver() {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return true;
        }
    }

   
    for (int j = 0; j < 3; j++) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[0][j] == board[2][j]) {
            return true;
        }
    }

    
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return true;
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return true;
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }

    return true;
}
char getWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            return board[i][0];
        }
    }


    for (int j = 0; j < 3; j++) {
        if (board[0][j] != ' ' && board[0][j] == board[1][j] && board[0][j] == board[2][j]) {
            return board[0][j];
        }
    }

    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        return board[0][0];
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        return board[0][2];
    }

    return ' '; 
}
