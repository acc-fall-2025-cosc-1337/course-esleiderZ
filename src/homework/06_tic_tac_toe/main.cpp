#include "tic_tac_toe_manager.h"
#include <iostream>

int main()
{
    TicTacToeManager manager;
    std::string choice;

    do
    {
        TicTacToe game(3);
        std::string first_player;

        std::cout << "Enter first player (X or O): ";
        std::cin >> first_player;

        while (!(first_player == "X" || first_player == "x" ||
                 first_player == "O" || first_player == "o"))
        {
            std::cout << "Invalid. Enter X or O: ";
            std::cin >> first_player;
        }

        if (first_player == "x") first_player = "X";
        if (first_player == "o") first_player = "O";

        game.start_game(first_player);
        std::cout << game;

        while (!game.game_over())
        {
            std::cin >> game;
            std::cout << game;
        }

        std::cout << "Winner: " << game.get_winner() << "\n";

        manager.save_game(game);

        int o, x, t;
        manager.get_winner_totals(o, x, t);

        std::cout << "X wins: " << x
                  << "   O wins: " << o
                  << "   Ties: " << t << "\n";

        std::cout << "Play again? (Y/N): ";
        std::cin >> choice;

    } while (choice == "Y" || choice == "y");

    return 0;
}