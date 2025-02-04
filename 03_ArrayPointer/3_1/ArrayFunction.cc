#include <array>
#include <cstdint>
#include <iostream>


template<std::size_t N>
void output_array(const std::array<std::int32_t, N> arr)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
    return;
}

int main()
{

    constexpr std::size_t arr_len = 4U;
    const std::array<std::int32_t, arr_len> arr = {1, 2, 3, 4};
    output_array(arr);

    return 0;
}
