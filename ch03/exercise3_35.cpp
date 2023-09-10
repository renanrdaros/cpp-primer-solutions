#include <iterator>

int main()
{
    int arr[10];

    auto pend = std::end(arr);
    for (auto p = std::begin(arr); p != pend; ++p) {
        *p = 0;
    }

    return 0;
}
