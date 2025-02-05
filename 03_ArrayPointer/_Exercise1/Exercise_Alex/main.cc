#include <array>
#include <cstdint>
#include <iostream>

#include "array_alex.h"


int main()
{
    constexpr static auto len = std::uint32_t{100U};

    double num_array[len]{};

    std::array<double, len> num_array_2 = {};

    // Init array with numbers 0...99
    for (std::uint32_t i = 0; i < (len); ++i)
    {
        num_array[i] = static_cast<double>(i);
    }
    std::cout << "C Style "
                 "sum_array"
                 " output : "
              << sum_array(num_array, len) << std::endl;

    for (std::uint32_t i = 0; i < num_array_2.size(); ++i)
    {
        num_array_2[i] = static_cast<double>(i);
    }

    std::cout << "C++ Style "
                 "sum_array_2"
                 " output : "
              << sum_array2(num_array_2) << std::endl;

    return 0;
}
