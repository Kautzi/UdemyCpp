#include <iostream>

int main()
{
    int age1 = 28;
    int age2 = 56;

    int older_age1;

    older_age1 = age1 < age2 ? age2 : age1;

    std::cout << older_age1;
    
    return 0;
}
