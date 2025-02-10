#include <iostream>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int *p_d = &a;
    int *p_e = &b;
    int *p_f = &c;

    *p_d = (2 * (*p_e)) + (3 * (*p_f)); //a= 13
    p_d = &b;                           //2
    p_f = &a;                           //13

    *p_e = *p_d + *p_f; //b=15

    std::cout << a << '\n';    //13
    std::cout << *p_d << '\n'; //15
    std::cout << *p_e << '\n'; //15
    std::cout << *p_f << '\n'; //13

    return 0;
}
