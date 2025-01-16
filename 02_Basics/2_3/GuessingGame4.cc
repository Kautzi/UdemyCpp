#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t max_number_of_attempts = 3;
    std::int32_t current_number_of_attempts = 0;

    for (; current_number_of_attempts < max_number_of_attempts; current_number_of_attempts++)
    {
        std::uint32_t number = 0;
        std::cout << "Insert your attempt: ";
        std::cin >> number;

        if ( (number <= 10))
        {
            if (number == 4)
            {
                std::cout << "You won!" << std::endl;
            }
            else if (number == 2)
            {
                std::cout << "You won wooden spoon!" << std::endl;
            }
            else
            {
                std::cout << "You lost!" << std::endl;
            }
        }
        else
        {
        std::cout << "You entered an invalid number!" << std::endl;
        }

    }
    return 0;
}
