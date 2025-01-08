#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.
// The variable a should be a double

int main()
{
    float side_length = 0.0;                                                                    //Always initialize variables
    std::cout << "Please Enter the side length of square: ";
    std::cin >> side_length;
    std::cout << std::endl;

    std::cout << "The Perimeter of the square is: " << 4 * side_length << std::endl;
    std::cout << "The Area of the square is: " << side_length * side_length << std::endl;

    return 0;
}
