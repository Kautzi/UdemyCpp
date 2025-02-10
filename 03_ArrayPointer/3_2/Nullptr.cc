#include <cstdint>
#include <iostream>

int main()
{

    auto *my_int = new std::int32_t{4};
    delete my_int;
    my_int = nullptr;

    if(my_int == nullptr)
    {
        std::cout << "Pointer was deleted!" << std::endl;
    }
    else
    {
        std::cout << *my_int;
    }

    return 0;
}
