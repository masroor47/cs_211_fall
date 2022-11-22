#include <iostream>

using namespace std;

typedef char box[5][7];

void printBox(box b) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            cout << b[i][j];
        }
        cout << '\n';
    }
}

void printBoard(box *board[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int k = 0; k < 5; k++) {
            for (int j = 0; j < 8; j++) {
                for (int l = 0; l < 7; l++) {
                    cout << (*board[i][j])[k][l];
                }
                
            }
            cout << endl;
        }
    }
}

// 'Placing' the queens from 1D array onto the fancy board
void setQueens(box * board[8][8], int queens[8], box *bq, box *wq) {
    for (int i = 0; i < 8; i++) {
        if ((i + queens[i]) % 2 == 0) {
            board[queens[i]][i] = wq;
        } else {
            board[queens[i]][i] = bq;
        }
    }
    cout << endl;
}

// Set the fancy board to a clean chess board without any queens;
void resetBoard(box *board[8][8], box *bb, box *wb) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                board[i][j] = wb;
            } else {
                board[i][j] = bb;
            }
        }
    }
}

// Same old check function
bool check(int queens[8], int c) {
    for (int i = 0; i < c; i++) {
        if (queens[i] == queens[c]) {
            return false;
        }
        if (c - i == abs(queens[c] - queens[i])) {
            return false;
        }
    }
    return true;
}

int main() {

    box bb, wb, *board[8][8];
    // char black = █;
    // Having issues printing char(219) on mac. Seems that it does not support the extended ascii chars
    char black = ' ';
    char white = 'X';

    // Setting the white block and black block
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            bb[i][j] = black;
            wb[i][j] = white;
        }
    }

    resetBoard(board, &bb, &wb);

    // Initializing the queens manually to the desired picture

    //  X X X
    //  XXXXX
    //  XXXXX

    box bq = {
        {black, black, black, black, black, black, black},
        {black, white, black, white, black, white, black},
        {black, white, white, white, white, white, black},
        {black, white, white, white, white, white, black},
        {black, black, black, black, black, black, black},
    };
  
    box wq = {
        {white, white, white, white, white, white, white},
        {white, black, white, black, white, black, white},
        {white, black, black, black, black, black, white},
        {white, black, black, black, black, black, white},
        {white, white, white, white, white, white, white},
    };

    int queens[8] = {0};
    int c = 0, count = 0;

    while (c >= 0) {
        if (c > 7) {
            // Correct queens placement found, need to print the board
            count++;
            cout << "One correct Queens Placement:\n";
            setQueens(board, queens, &bq, &wq);
            printBoard(board);
            resetBoard(board, &bb, &wb);
            c--;
            queens[c]++;
            cout << endl;
            cout << endl;
        }
        
        if (queens[c] > 7) {
            queens[c] = 0;
            c--;
            if (c != -1) {
                queens[c]++;
            }
        } else if (check(queens, c)) {
            c++;
        } else {
            queens[c]++;
        }
    }
    cout << "Thanks for using our program\n";
    cout << "Total queens placements: " << count << endl;
}