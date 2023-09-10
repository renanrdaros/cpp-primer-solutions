#include <iostream>
#include <iterator>
#include <cstddef>

int main()
{
    constexpr std::size_t n_rows = 3;
    constexpr std::size_t n_cols = 4;

    int ia[n_rows][n_cols] {{1, 2, 3, 4},
                            {5, 6, 7, 8},
                            {9, 10, 11, 12}};

    using int_array = int[n_cols];

    for (const int_array* row = std::begin(ia); row != std::end(ia); ++row) {
        for (const int* i = std::begin(*row); i != std::end(*row); ++i) {
            std::cout << *i << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}
