#include <iostream>

// &: Reference
// *p: De-reference

int main()
{
    int num = 5;
    int *p = &num;

    std::cout << "Address of pointer ""p"": " << p << std::endl;
    std::cout << "Value of Address ""p"" is pointing to: " <<*p << std::endl;
    std::cout << "Address of pointer ""p"": " << &p << std::endl;

    return 0;
}
