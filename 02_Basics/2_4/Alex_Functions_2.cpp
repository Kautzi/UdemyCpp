#include <cstdint>
#include <iostream>

/***    Declarations     */

bool is_even(std::uint16_t number)
    {
        return !(number % 2);
    }

std::uint16_t get_int()
    {
        std::uint16_t number = 0;
        std::cout << "Please enter an Integer: ";
        std::cin >> number;
        return number;
    }

int main()
{

    std::cout << "Your number is " << std::boolalpha  << is_even(get_int()) << std::endl;

    return 0;
}
