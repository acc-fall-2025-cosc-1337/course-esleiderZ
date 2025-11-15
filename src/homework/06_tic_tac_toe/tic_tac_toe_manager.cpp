#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(const TicTacToe& game)
{
    games.push_back(game);
    update_winner_count(game.get_winner());
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if (winner == "X")
        x_win++;
    else if (winner == "O")
        o_win++;
    else
        ties++;
}

void TicTacToeManager::get_winner_totals(int& o, int& x, int& t)
{
    o = o_win;
    x = x_win;
    t = ties;
}
