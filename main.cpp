#include <iostream>
#include<TicTacToe.h>
using namespace std;


void clearConsole() 
{
    cout << "\033[2J\033[1;1H";
}


int main()
{
    TicTacToe game;
    int move;

    while (true) 
    {
        clearConsole(); 
        
        cout << "=== TIC-TAC-TOE GAME ===\n";
        game.drawBoard();
        cout << "Player " << game.getCurrentPlayer() << ", enter square number (1-9): ";
        cin >> move;

        if (!game.makeMove(move)) 
        {
            cout << "Invalid move! Spot already taken or out of range. Press Enter to try again...";
            cin.ignore();
            cin.get();
            continue;
        }

        if (game.checkWin())
        {
            clearConsole();
            game.drawBoard();
            cout << "Congratulations! Player " << game.getCurrentPlayer() << " wins!\n";
            break;
        }

        if (game.checkDraw())
        {
            clearConsole();
            game.drawBoard();
            cout << "It's a draw!\n";
            break;
        }

        game.switchPlayer();
    }

    return 0;
}