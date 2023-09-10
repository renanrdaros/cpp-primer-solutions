#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int value;

    while (std::cin >> value) {
        ivec.push_back(value);
    }

    if (ivec.cbegin() == ivec.cend()) {
        std::cerr << "Error: No data to process!" << std::endl;
        return -1;
    }

    auto mid = ivec.cbegin() + ((ivec.cend() - ivec.cbegin() + 1) / 2);
    for (auto it = ivec.cbegin(); it != mid; ++it) {
        std::cout << *it + *(ivec.cend() - 1 - (it - ivec.cbegin())) << ' ';
    }
    std::cout << std::endl;

    return 0;
}
