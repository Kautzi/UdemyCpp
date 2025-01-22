#include <cstdint>
#include "Recursion.h"



std::uint32_t fact(std::uint32_t number)
{
    if (number == 1)
        return number;

    else
        return number * fact(number - 1);
}

std::uint32_t sum(std::uint32_t number)
{
    if(number == 0)
        return 0;

    else
        return number + (sum(number - 1));
}
