#include <cstdint>
#include <iostream>

double max( double a, double b) //to overload a finction the parameter have to be different
{
    return a > b ? a : b;
}

int max( int a, int b)
{
    return a > b ? a : b;
}

int main()
{

    std::int32_t a = 2;
    std::int32_t b = 6;

    double c = -1.34;
    double d = 3.55;

    std::cout << "The greater double is: " << max(d, c) << '\n';
    std::cout << "The greater int is: " << max(b,a) << '\n';

    return 0;
}
