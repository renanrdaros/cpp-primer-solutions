// note: there's no need for a type alias in this solution

#include <iostream>
#include <cstddef>

int main()
{
    constexpr std::size_t n_rows = 3;
    constexpr std::size_t n_cols = 4;

    int ia[n_rows][n_cols] {{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12}};

    for (std::size_t i = 0; i != n_rows; ++i) {
        for (std::size_t j = 0; j != n_cols; ++j) {
            std::cout << ia[i][j] << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}
