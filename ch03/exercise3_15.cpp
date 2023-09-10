#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> vec;
    std::string value;

    while (std::cin >> value) {
        vec.push_back(value);
    }

    return 0;
}
