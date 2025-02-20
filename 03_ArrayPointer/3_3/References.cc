#include <iostream>

void foo(int *b)
{
    std::cout << &b << std::endl;
}

int main()
{
    int a=2;
    std::cout << &a << std::endl;
    foo(&a);
    return 0;
}
