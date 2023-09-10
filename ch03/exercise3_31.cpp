#include <cstddef>

int main()
{
    constexpr std::size_t array_size = 10;
    int array[array_size];

    for (std::size_t i = 0; i < array_size; ++i) {
        array[i] = i;
    }

    return 0;
}
