#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int value;

    while (std::cin >> value) {
        ivec.push_back(value);
    }

    if (ivec.size() < 2) {
        std::cerr << "Error: No data to process! Please enter at least two integers."
                  << std::endl;
        return -1;
    }

    for (decltype(ivec.size()) i = 0; i != ivec.size() - 1; ++i) {
        std::cout << ivec[i] + ivec[i+1] << ' ';
    }
    std::cout << std::endl;

    return 0;
}
