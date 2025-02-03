#include <cstdint>
#include <iostream>

int main()
{
    char first_name[] = {'J', 'a', 'n', '\0'};
    std::cout << first_name;

    const char last_name[] = "Kautz";
    std::cout << last_name << std::endl;

    for (std::uint16_t i = 0; i <  sizeof(last_name)-1U; ++i)
    {
        std::cout << "last_name[" << i << "] = " << last_name[i] << std::endl;
    }


        return 0;
}
