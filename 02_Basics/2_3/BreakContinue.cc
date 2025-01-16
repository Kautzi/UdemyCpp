#include <cstdint>
#include <iostream>

int main()
{
    std::int32_t sum = 0;

    while(true)
    {
        std::cout << "\nCurrent Sum: " << sum << " Enter the next value: ";
        std::int32_t input = 0;
        std::cin >> input;

        if(input < 0)
            break;

        sum += input;
    }

    return 0;
}
