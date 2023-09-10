#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it *= 2;
    }

    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}
