#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t sum = 0U;

    while(sum < 10)
    {
        std::cout << "\nCurrent Sum: " << sum << " Enter next value: ";
        std::int32_t input = 0U;
        std::cin >> input;

        sum += input;
    }


    return 0;
}
