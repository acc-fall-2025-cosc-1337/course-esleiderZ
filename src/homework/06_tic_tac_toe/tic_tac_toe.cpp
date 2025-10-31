//cpp
#include "tic_tac_toe.h"
using std::cout;
using std::string;

bool TicTacToe::game_over()
{
    return check_winner() || check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    if (first_player == "x" || first_player == "X")
        player = "X";
    else
        player = "O";

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    if (position < 1 || position > 9)
    {
        cout << "Invalid position! Must be between 1 and 9.\n";
        return;
    }

    if (pegs[position - 1] != " ")
    {
        cout << "That spot is already taken! You lose your turn.\n";
        set_next_player();
        return;
    }

    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    cout << "\n";
    for (size_t i = 0; i < pegs.size(); i += 3)
    {
        cout << " " << pegs[i] << " | " << pegs[i + 1] << " | " << pegs[i + 2] << " \n";
        if (i < 6)
            cout << "---|---|---\n";
    }
    cout << "\n";
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
        player = "X";
}

bool TicTacToe::check_board_full()
{
    for (auto &peg : pegs)
    {
        if (peg == " ")
            return false;
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (auto &peg : pegs)
    {
        peg = " ";
    }
}

bool TicTacToe::check_winner()
{
    int win_combos[8][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8},
        {0, 3, 6}, 
        {1, 4, 7},
        {2, 5, 8}, 
        {0, 4, 8}, 
        {2, 4, 6}  
    };

    for (auto &combo : win_combos)
    {
        if (pegs[combo[0]] != " " &&
            pegs[combo[0]] == pegs[combo[1]] &&
            pegs[combo[1]] == pegs[combo[2]])
        {
            cout << "\n Player " << pegs[combo[0]] << " wins! \n";
            return true;
        }
    }

    return false;
}
