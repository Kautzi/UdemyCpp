#include <cstdint>
#include <iostream>

int main()
{

    auto array_size = std::size_t{10};

    auto *arr = new std::int32_t[array_size];

    auto *arr_cpy = arr;
    for (std::size_t i = 0; i < array_size; ++i)
    {
        //arr[i] =static_cast<std::int32_t>(i);
        *arr_cpy = static_cast<std::int32_t>(i);
        arr_cpy++;
    }


    for (std::size_t i = 0; i < array_size; ++i)
    {
        std::cout << arr[i] << '\n';
    }

    delete[] arr;
    arr = nullptr;

    if (arr == nullptr)
    {
        std::cout << "Pointer is deleted!" << std::endl;
    }

    return 0;
}
