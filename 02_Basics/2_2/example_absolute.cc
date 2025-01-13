#include <iostream>

// 1.) User-Input: number
// 2.) Compute the absolute value of the number
// 3.) Print out the absolute value
// The number can be a float/double/int etc. its up to you :)

// x < 0: -x
// x >= 0: x

int main()
{
    float number = 0.0;
    std::cout << "Insert a number: ";
    std::cin >> number;
    std::cout << std::endl;

    if(number < 0)
    {
        std::cout << number * -1.0;
    }
    else
    {
        std::cout << number;
    }

    return 0;
}
