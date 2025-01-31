#include <cstdint>
#include <iostream>

// Store in an array *array2* the reversed elements of *array1*.

int main()
{
    constexpr auto len = std::uint32_t{4U};

    std::int32_t array1[len] = {1, 4, 7, 12};
    std::int32_t reverse_array[len]{};

    for (std::uint32_t i = 0; i < len; i++)
    {
        reverse_array[i] = array1[len-1 - i];
    }

    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << "reverse_array[" << i << "]= " << reverse_array[i] << '\n';
    }

        return 0;
}
