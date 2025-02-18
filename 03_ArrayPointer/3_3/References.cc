#include <iostream>

void f1(int v) //Copy
{
    std::cout << &v << std::endl;
}

void f2(int *v) //Pointer C approach
{
    std::cout << v << std::endl;
}

void f3(int &v) //Refferenc
{
    std::cout << v << std::endl;
}


int main()
{

    int a = 2;

    f1(a);
    f2(&a);
    f3(a);

    return 0;
}
