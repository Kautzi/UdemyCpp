#include <iostream>
#include <cstdint>



int main()
{
    std::uint8_t move = 0;

    for (std::uint8_t i = 0; i < 3; i++)
    {
        std::cin >> move;

        if(move == 'a')
        {
            std::cout << "The player moves left!";
        }
        else if(move == 'd')
        {
            std::cout << "The player moves right!";
        }
        else
        {
            std::cout << "Invalid input!";
        }
        std::cout << std::endl;
    }
    return 0;
}
