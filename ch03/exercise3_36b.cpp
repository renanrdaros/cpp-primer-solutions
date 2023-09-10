#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v0 {1, 2, 3, 4, 5};
    std::vector<int> v1 {1, 2, 4, 4, 5};
    std::vector<int> v2 {1, 2, 4, 4, 5};
    std::vector<int> v3 {1, 2, 4};

    std::cout << std::boolalpha; // print true/false instead of 1/0
    std::cout << "v0 == v1: " << (v0 == v1) << std::endl;
    std::cout << "v1 == v2: " << (v1 == v2) << std::endl;
    std::cout << "v2 == v3: " << (v2 == v3) << std::endl;

    return 0;
}
