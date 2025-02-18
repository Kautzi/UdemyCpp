#include <iostream>


void copy(int v) //Copy
{
    std::cout << "copy(): " << v << std::endl;
    std::cout << &v << std::endl;
}

void copy_const(const int v) //Copy
{
    std::cout << "copy_const(): " << v << std::endl;
    std::cout << &v << std::endl;
}

void reference_in_output(int &v) //Refferenc input and output
{
    v *= 2;
    std::cout << "reference_in_output(): " << v << std::endl;
    std::cout << &v << std::endl;
}

void reference_only_input(const int &v) //Refferenc
{

    std::cout << "reference_only_input(): " << v << std::endl;
    std::cout << &v << std::endl;
}

int main()
{

    int a = 2;

    copy(a);
    copy_const(a);
    reference_in_output(a);
    reference_only_input(a);

    return 0;
}
