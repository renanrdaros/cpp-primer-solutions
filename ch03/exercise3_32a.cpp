#include <cstddef>

int main()
{
    constexpr std::size_t array_size = 10;
    int array1[array_size];

    // fill array1
    for (std::size_t i = 0; i < array_size; ++i) {
        array1[i] = i;
    }

    int array2[array_size];

    // copy array1 into array2
    for (std::size_t i = 0; i < array_size; ++i) {
        array2[i] = array1[i];
    }

    return 0;
}
