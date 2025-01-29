#include <cstdint>
#include <iostream>

#include "Game.h"



void game()
{
    std::uint16_t Player_current_pos = 0;

    char move;

    while (true)
    {
        std::cin >> move;

        if (LEFT == move)
        {
           // std::cout << "The player moved to the left!\n";
            if (Player_current_pos != START)
            {
                Player_current_pos--;
            }
            else
            {
                std::cout << "Can't move you are at START position!\n";
                continue;
            }
        }
        else if (RIGHT == move)
        {
            //std::cout << "The player moved to the right!\n";
            if (Player_current_pos != END)
            {
                Player_current_pos++;
            }
            else
            {
                std::cout << "GOAL!\n";
                break;
            }
        }
        else
        {
            std::cout << "Unrecognized move!\n";
        }

        //Output the Game Plate
        for (std::uint16_t i = 0; i < length_game_plate; i++)
        {
            if (i == Player_current_pos)
            {
                std::cout << "P";
            }
            else if (i == START || i == END)
            {
                std::cout << "|";
            }
            else
            {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
    return ;
}
