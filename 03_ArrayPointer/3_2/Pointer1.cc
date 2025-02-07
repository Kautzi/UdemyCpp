#include <iostream>
#include <array>
#include <cstdint>

// &: Reference
// *p: De-reference

int main()
{
    // int num = 5;
    int *p = new int{4};
    //*p = 4

    std::cout << "Address ehre pointer "
                 "p"
                 " is pointing to : "
              << p << std::endl;
    std::cout << "Value of Address "
                 "p"
                 " is pointing to: "
              << *p << std::endl;
    std::cout << "Address of pointer "
                 "p"
                 ": "
              << &p << std::endl;

    delete(p);
    //Create an array with 4 values

    std::array<std::uint32_t, 4>arr_point={1, 2, 3, 4};

    for (std::uint32_t i = 0; i < arr_point.size(); i++)
    {
        std::cout << (arr_point[i]) << std::endl;
    }

        return 0;
}
