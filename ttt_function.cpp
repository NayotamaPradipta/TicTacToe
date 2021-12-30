#include <iostream>
#include "ttt_function.hpp"

using namespace std;
// Initialize each board cells with empty string
string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
int player = 1; // Player 1 will be first to play
int position = 0;
bool player1 = false;
bool player2 = false;
void start()
{
    cout << "Press [Enter] to start: ";
    cin.ignore();
    cout << "\n";
    cout << "              _                            _        \n";
    cout << "             | |                          | |       \n";
    cout << "__      _____| | ___ ___  _ __ ___   ___  | |_ ___  \n";
    cout << "\\ \\ /\\ / / _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\ | __/ _ \\ \n";
    cout << " \\ V  V /  __/ | (_| (_) | | | | | |  __/ | || (_) |\n";
    cout << "  \\_/\\_/ \\___|_|\\___\\___/|_| |_| |_|\\___|  \\__\\___/ \n";
    cout << "\n";
    cout << " _   _      _             _ \n";
    cout << "| | (_)    | |           | |\n";
    cout << "| |_ _  ___| |_ __ _  ___| |_ ___   ___\n";
    cout << "| __| |/ __| __/ _` |/ __| __/ _ \\ / _ \\\n";
    cout << "| |_| | (__| || (_| | (__| || (_) |  __/\n";
    cout << " \\__|_|\\___|\\__\\__,_|\\___|\\__\\___/ \\___|\n";

    cout << "Player 1) X\n";
    cout << "Player 2) ⊙\n\n";
    cout << "The Image Below is the TicTacToe Board!\n\n";

    cout << "     |     |      \n";
    cout << "  1  |  2  |  3   \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  4  |  5  |  6   \n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  7  |  8  |  9   \n";
    cout << "     |     |      \n\n";
}

void setPosition()
{
    cout << "Player " << player << ", please enter a valid number between 1 and 9: ";
    while (!(cin >> position))
    {

        cin.clear();
        cin.ignore();
    }
    while (board[position - 1] != " ")
    { // Player inputs a number that has been occupied with either an 'X' or 'O'
        cout << "The particular board cell is occupied!\n\n";
        cout << "Player " << player << ", please re-enter an empty/available cell (Enter 1-9): ";
        cin >> position;
        cout << "\n";
    }
}

void updateBoard()
{
    // Function to insert the symbol depending on which player is currently playing
    if (player % 2 == 1)
    {
        board[position - 1] = "X";
    }
    else
    {
        board[position - 1] = "O";
    }
}

void changePlayer()
{
    if (player == 1)
    {
        player += 1; // Change to Player 2
    }
    else
    {
        player -= 1; // Revert back to Player 1
    }
}

void drawBoard()
{
    // Function to draw the updated version of the board
    cout << "     |     |      \n";
    cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
    cout << "_____|_____|_____ \n";
    cout << "     |     |      \n";
    cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    cout << "     |     |      \n";
    cout << "\n";
}

bool isNotDraw()
{
    // Check Horizontally
    if (board[0] == board[1] && board[1] == board[2] && board[1] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    else if (board[3] == board[4] && board[4] == board[5] && board[4] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    else if (board[6] == board[7] && board[7] == board[8] && board[7] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    // Check Vertically
    else if (board[0] == board[3] && board[3] == board[6] && board[3] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    else if (board[1] == board[4] && board[4] == board[7] && board[4] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    else if (board[2] == board[5] && board[5] == board[8] && board[5] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    // Check Horizontally
    else if (board[0] == board[4] && board[4] == board[8] && board[4] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    else if (board[2] == board[4] && board[4] == board[6] && board[4] != " ")
    {
        if (board[1] == "X")
        {
            player1 = true;
        }
        else
        {
            player2 = true;
        }
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    bool full = true;
    for (int i = 0; i < 9; i++)
    {
        if (board[i] == " ")
        {
            full = false;
        }
    }
    return full;
}

void takeTurn()
{
    while (!isNotDraw() && !isFull())
    {
        setPosition();
        updateBoard();
        changePlayer();
        drawBoard();
    }
}

void end()
{
    if (isNotDraw())
    {
        if (player1){
            cout << "Congratulation Player 1, You Win!\n";
        }
        else {
            cout << "Congratulation Player 2, You Win!\n";
        }
    }
    else
    {
        cout << "It's a tie!\n";
    }
}