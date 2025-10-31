#include "tic_tac_toe.h"
using std::string;
using std::cin;
using std::cout;

int main()
{
    TicTacToe tic_tac_toe;
    string first_player;
    char play_again = 'Y';

    cout << "=== TIC TAC TOE ===\n";

    while (play_again == 'Y' || play_again == 'y')
    {
        cout << "\nEnter first player (X or O): ";
        cin >> first_player;

        while (first_player != "X" && first_player != "x" &&
               first_player != "O" && first_player != "o")
        {
            cout << "Invalid input! Please enter X or O: ";
            cin >> first_player;
        }

        tic_tac_toe.start_game(first_player);
        tic_tac_toe.display_board();

        while (!tic_tac_toe.game_over())
        {
            int position;
            cout << "Player " << tic_tac_toe.get_player() << ", enter position (1-9): ";
            cin >> position;

            tic_tac_toe.mark_board(position);
            tic_tac_toe.display_board();
        }

        cout << "\nGame over!\n";

        cout << "\nWould you like to play again? (Y/N): ";
        cin >> play_again;

        while (play_again != 'Y' && play_again != 'y' &&
               play_again != 'N' && play_again != 'n')
        {
            cout << "Please enter Y to play again or N to quit: ";
            cin >> play_again;
        }
    }

    cout << "\nThanks for playing Tic Tac Toe!\n";
    return 0;
}

