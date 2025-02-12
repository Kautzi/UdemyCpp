#include <array>
#include <cstdint>
#include <iostream>

std::int32_t *array_constructor(const std::int32_t value, const std::size_t length)
{

    auto heap_array = new std::int32_t[length];
    for (std::size_t i = 0; i < length; i++)
    {
        heap_array[i] = value;
    }

    return heap_array;
}


template <std::size_t N>
std::int32_t *array_constructor_new(const std::int32_t value, const std::size_t length)
{

    auto heap_array = new std::int32_t[length];
    for (std::size_t i = 0; i < length; i++)
    {
        heap_array[i] = value;
    }

    return heap_array;
}


int main()
{

    auto my_array = array_constructor(2, 10);

    for (std::size_t i = 0; i < 10; i++)
    {
        std::cout << my_array[i] << std::endl;
    }

    delete[] my_array;
    return 0;
}
