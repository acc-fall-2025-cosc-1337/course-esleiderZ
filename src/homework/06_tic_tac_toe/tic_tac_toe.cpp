//cpp
#include "tic_tac_toe.h"
using std::cout;
using std::cin;

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    // Validate input range (1–9)
    if (position < 1 || position > 9)
    {
        cout << "Invalid position! Please choose a number between 1 and 9.\n";
        set_next_player(); // lose turn
        return;
    }

    // Check if position already taken
    if (pegs[position - 1] != " ")
    {
        cout << "That spot is already taken! You lose your turn.\n";
        set_next_player(); // lose turn
        return;
    }

    // Valid move
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (long unsigned int i = 0; i < pegs.size(); i += 3)
    {
        cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (auto &peg : pegs)
    {
        if (peg == " ")
        {
            return false;
        }
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
