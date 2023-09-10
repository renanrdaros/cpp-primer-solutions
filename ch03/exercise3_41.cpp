#include <vector>
#include <iterator>

int main()
{
    int arr[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> vec(std::begin(arr), std::end(arr));

    return 0;
}
