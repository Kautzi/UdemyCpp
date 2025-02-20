#include <cstdint>
#include <iostream>

#include "exercise.h"

// Exercise 1
void push_back(std::int32_t *&input_array, const std::size_t size, const std::int32_t value)
{
    auto new_array = new std::int32_t[size + 1];
    for (std::size_t i = 0; i < size; i++)
    {
        new_array[i] = input_array[i];
    }
    delete[] input_array;
    new_array[size] = value;
    input_array = new_array;
    return;
}

// Exercise 2
void pop_back(std::int32_t *&input_array, const std::size_t size)
{
    auto new_array = new std::int32_t[size - 1];
    for (std::size_t i = 0; i < size - 1; i++)
    {
        new_array[i] = input_array[i];
    }
    delete[] input_array;

    input_array = new_array;
    return;
}
