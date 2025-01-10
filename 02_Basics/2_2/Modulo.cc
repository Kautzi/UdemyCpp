#include <cstdint>
#include <iostream>

int main()
{

    std::uint32_t number;


    for (std::uint8_t i =3 ; i >= 3; i--)
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
            else if(!(number % 2))
            {
                std::cout << "YOU GET a WOODEN PRCE!" << std::endl;
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
