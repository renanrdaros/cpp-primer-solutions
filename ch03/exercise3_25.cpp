#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> scores(11, 0);
    auto begin = scores.begin();
    unsigned grade;

    while (std::cin >> grade) {
        if (grade <= 100)
            ++(*(begin + grade/10));
    }

    for (auto it = scores.cbegin(); it != scores.cend(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;

    return 0;
}
