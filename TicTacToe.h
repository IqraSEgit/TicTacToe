
class TicTacToe 
{
private:
    char board[3][3];
    char currentPlayer;

public:
    TicTacToe();
    void drawBoard() const;
    bool makeMove(int choice);
    void switchPlayer();
    bool checkWin() const;
    bool checkDraw() const;
    char getCurrentPlayer() const; 
};