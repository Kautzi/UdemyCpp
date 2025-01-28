#include <cstdint>
#include <iostream>

void super_duper_example(const std::int32_t number)
{
    static std::uint32_t count = 0;

    if( (number % 2 == 0) && (number != 10))
    {
        count++;
    }
    else if(number == 10)
    {
        count = 0;
    }

    return;
}

int main()
{

    for (std::int32_t i = 0; i < 11; i++)
        super_duper_example(i);


    return 0;
}
