#include <cstdint>
#include <iostream>

// Output the length of the char array (String)
// The '\0' is not included in the length value

/**
 * @brief gets a string as input
 *
 * @return returns numbers of characters
 */

std::uint16_t count_charcters(const char * my_string)
    {
        std::uint16_t count_char = 0;
        while (my_string[count_char] != '\0')
        {
            count_char++;
        }

        return count_char;
    }

int main()
{

    char my_string[] = "Hallo ich bims!";
    std::cout << "Length of my_string is = " << count_charcters(my_string);
    return 0;
}
