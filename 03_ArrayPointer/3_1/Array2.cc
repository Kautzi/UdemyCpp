#include <cstdint>
#include <iostream>

int main()
{
    constexpr auto len = std::uint32_t{3U};

    float vector1[len]{};
    float vector2[len]{};

    std::cout << "Type the values of the 1 Vector:\n";
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cin >> vector1[i];
    }
    std::cout << "Type the values of the 2 Vector:\n";
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cin >> vector2[i];
    }

    //add the two vectors

    float vector_sum[len]{};

    for (std::uint32_t i = 0; i < len; i++)
    {
        vector_sum[i] = vector1[i] + vector2[i];
    }

    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << "Vector_sum[" << i << "]= " << vector_sum[i] << std::endl;
    }

    return 0;
}
