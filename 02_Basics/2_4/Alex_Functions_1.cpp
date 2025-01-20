#include <cstdint>
#include <iostream>


std::int32_t input()
{
    std::int32_t number = 0;
    std::cout << "Please enter a number: ";
    std::cin >> number;
    return number;
}

int main()
{
    std::int32_t sum = 0;
    for (std::uint16_t i = 0; i < 3; i++)
    {

        sum+=input();


    }

    std::cout << sum;

    return 0;
}
