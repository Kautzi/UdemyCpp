#include "array_alex.h"


//#### C Style Array #####

double sum_array(const double arr[], const std::uint32_t len)
{
    double sum = 0;

    for (std::uint32_t i = 0; i < (len); ++i)
    {
        sum += arr[i];
    }

    return sum;
}

//#### End C Style Array ###

//#### C++ Style Array #####

double sum_array2(std::array<double, 100> arr)
{
    double sum = 0;

    for (std::uint32_t i = 0; i < arr.size(); ++i)
    {
        sum += arr[i];
    }

    return sum;
}

//### End C++ Style Array ####
