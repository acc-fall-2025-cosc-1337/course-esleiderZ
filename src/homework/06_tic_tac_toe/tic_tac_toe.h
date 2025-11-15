#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <iostream>
#include <string>
#include <vector>

class TicTacToe
{
public:
    TicTacToe(int size = 3) : pegs(size * size, " ") {}
    
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const { return player; }
    std::string get_winner() const { return winner; }
    void display_board() const;

    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

private:
    std::string player;
    std::string winner = "C";
    std::vector<std::string> pegs;

    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_winner();
};

#endif
