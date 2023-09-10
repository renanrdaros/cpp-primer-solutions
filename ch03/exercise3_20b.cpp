#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int value;

    while (std::cin >> value) {
        ivec.push_back(value);
    }

    if (ivec.empty()) {
        std::cerr << "Error: No data to process!" << std::endl;
        return -1;
    }

    const auto mid = (ivec.size() + 1) / 2;
    for (decltype(ivec.size()) i = 0; i != mid; ++i) {
        std::cout << ivec[i] + ivec[ivec.size() - 1 - i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
