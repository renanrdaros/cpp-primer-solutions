#include <vector>
#include <cstddef>
#include <numeric>

int main()
{
    const std::size_t size = 50;
    std::vector<int> vec(size);
    int array[size];

    // fill vec with a sequence (1 through 50)
    std::iota(vec.begin(), vec.end(), 1);

    // copy the values of vec into array
    for (std::size_t i = 0; i != size; ++i) {
        array[i] = vec[i];
    }

    return 0;
}
