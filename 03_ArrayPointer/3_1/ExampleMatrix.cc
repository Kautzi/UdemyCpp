#include <cstdint>
#include <iostream>

// Compute the sum for every column

int main()
{
    constexpr static auto num_rows = std::uint32_t{3};
    constexpr static auto num_cols = std::uint32_t{2};

    std::int32_t my_matrix[num_rows][num_cols] = {{1, 2}, {3, 4}, {5, 6}};

    for (std::uint32_t i = 0; i < num_cols; ++i)
        {
            std::int32_t sum = 0;
            for (std::uint32_t j = 0; j < num_rows; ++j)
            {

                sum += my_matrix[j][i];
            }
            std::cout << "Sum of col " << i << "= " << sum << '\n';
        }

        return 0;
}
