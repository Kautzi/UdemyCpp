#include <cstdint> // header for the standart int types like uint8_t ....
#include <iostream> // header for the in and outpput


int main()
{
    std::uint32_t number;



    for (std::uint8_t i=0; i <= 3; i++)
    {
        std::cout << "Please enter your guess: ";

        std::cin >> number;
        if (number <= 10)
        {

            if (number == 4)
            {
                std::cout << "YOU WON!" << std::endl;
                return 0;
            }
            else
            {
                std::cout << "YOU lost!" << std::endl;
                return 0;
            }
        }
        else
        {
            std::cout << "You have " << (int)i << "trys remaining!" << std::endl;
        }
    }
    return 0;
}
