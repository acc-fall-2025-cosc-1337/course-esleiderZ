#include "tic_tac_toe.h"
#include <cmath>

using std::cout;
using std::string;

bool TicTacToe::game_over()
{
    if (check_winner())
    {
        winner = (player == "X" ? "O" : "X"); 
        return true;
    }

    if (check_board_full())
    {
        winner = "C";
        return true;
    }

    return false;
}

void TicTacToe::start_game(string first_player)
{
    if (first_player == "x" || first_player == "X")
        player = "X";
    else
        player = "O";

    clear_board();
    winner = "C";
}

void TicTacToe::mark_board(int position)
{
    if (position < 1 || position > static_cast<int>(pegs.size()))
{
     cout << "Invalid position! Must be between 1 and " << pegs.size() << ".\n";
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
    std::size_t size = static_cast<std::size_t>(std::sqrt(pegs.size()));
    cout << "\n";
    for (std::size_t i = 0; i < pegs.size(); i += size)
    {
        for (std::size_t j = 0; j < size; j++)
        {
            cout << " " << pegs[i + j];
            if (j < size - 1) cout << " |";
        }
        cout << "\n";
        if (i < pegs.size() - size)
        {
            for (std::size_t k = 0; k < size; k++)
            {
                cout << "---";
                if (k < size - 1) cout << "|";
            }
            cout << "\n";
        }
    }
    cout << "\n";
}

void TicTacToe::set_next_player()
{
    player = (player == "X") ? "O" : "X";
}

bool TicTacToe::check_board_full()
{
    for (auto& peg : pegs)
        if (peg == " ")
            return false;

    return true;
}

void TicTacToe::clear_board()
{
    for (auto& peg : pegs)
        peg = " ";
}

bool TicTacToe::check_winner()
{
    std::size_t size = static_cast<std::size_t>(std::sqrt(pegs.size()));
    int win_combos[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
        {0, 4, 8}, {2, 4, 6}
    };

    for (auto& combo : win_combos)
    {
        if (pegs[combo[0]] != " " &&
            pegs[combo[0]] == pegs[combo[1]] &&
            pegs[combo[1]] == pegs[combo[2]])
        {
            return true;
        }
    }

    return false;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    game.display_board();
    return out;
}

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    std::cout << "Player " << game.player << ", enter position: ";
    in >> position;
    game.mark_board(position);
    return in;
}
