#include <cstdint>
#include <iostream>

// 1.) User-Input: unsigned integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result
// Prime Number: Only divisble by itself and 1 with a remainder of 0

int main()
{
    std::uint16_t number;
    std::uint16_t count = 0;

    std::cout << "Ender a positive Integer: ";
    std::cin >> number;
    std::cout << std::endl;


    for (std::uint8_t i = 1; i <= number; i++)
    {
        if(!(number % i))
        {
            count++;
        }
    }

    if(count == 2)
    {
        std::cout << "You have entered a prime number !";
    }
    else
    {
        std::cout << "No prime number entered !";
    }

        return 0;
}
