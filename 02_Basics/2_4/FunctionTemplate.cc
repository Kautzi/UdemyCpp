#include <cstdint>
#include <iostream>
#include <concepts>

/**
 * @brief Computes max of a and b
 *
 * @tparam T should be int or double
 * @param a
 * @param b
 * @return
 */

template <typename T>
concept Arithmetic = std::is_arithmetic_v<T>;

template <Arithmetic T>
T max(T a, T b) //to overload a finction the parameter have to be different
{
    return a > b ? a : b;
}


int main()
{

    std::int32_t a = 2;
    std::int32_t b = 6;

    double c = -1.34;
    double d = 3.55;

    std::string e = "What";
    std::string f = "Hallp";

    std::cout << "The greater double is: " << max(d, c) << '\n';
    std::cout << "The greater int is: " << max(b, a) << '\n';
    std::cout << "The greater char is: " << max(e,f) << '\n';

    return 0;
}
