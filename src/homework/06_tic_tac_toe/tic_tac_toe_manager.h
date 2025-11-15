#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"
#include <vector>

class TicTacToeManager
{
public:
    void save_game(const TicTacToe& game);
    void get_winner_totals(int& o, int& x, int& t);

private:
    std::vector<TicTacToe> games;
    int o_win{0};
    int x_win{0};
    int ties{0};

    void update_winner_count(std::string winner);
};

#endif
