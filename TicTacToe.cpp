#include <iostream>
#include<TicTacToe.h>
using namespace std;
TicTacToe::TicTacToe()
    {
        currentPlayer = 'X';
        char count = '1';
        for (int i = 0; i < 3; i++) 
            for (int j = 0; j < 3; j++) 
                board[i][j] = count++;
    }
    //Initializing board

void TicTacToe :: drawBoard() const
    {
        cout << "\n";
        cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
        cout << "---|---|---\n";
        cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
        cout << "---|---|---\n";
        cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n\n";
    }

bool TicTacToe ::makeMove(int choice) 
    {
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = currentPlayer;
            return true;
        }
        return false;
    }

void TicTacToe ::switchPlayer() 
    {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

bool TicTacToe ::checkWin() const {
        // Rows and Columns
        for (int i = 0; i < 3; i++) 
        {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
        }
        // Diagonals
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;

        return false;
    }

bool TicTacToe ::checkDraw() const 
    {
        for (int i = 0; i < 3; i++) 
            for (int j = 0; j < 3; j++) 
                if (board[i][j] != 'X' && board[i][j] != 'O') 
                    return false;
        
        return true;
    }

char TicTacToe ::getCurrentPlayer() const 
    {
         return currentPlayer;
    }