#include <iostream>
#include "ttt_function.hpp"

using namespace std;
// Initialize each board cells with empty string
string board[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
int player = 1; // Player 1 will be first to play 
int position = 0;

void start(){
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

    cout << "Player 1) ✖\n";
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





void drawBoard(){
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