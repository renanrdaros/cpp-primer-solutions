#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    int value;

    while (std::cin >> value) {
        ivec.push_back(value);
    }

    if ((ivec.cend() - ivec.cbegin()) < 2) {
        std::cerr << "Error: No data to process! Please enter at least two integers."
                  << std::endl;
        return -1;
    }

    for (auto it = ivec.cbegin(); it != ivec.cend() - 1; ++it) {
        std::cout << *it + *(it + 1) << ' ';
    }
    std::cout << std::endl;

    return 0;
}
