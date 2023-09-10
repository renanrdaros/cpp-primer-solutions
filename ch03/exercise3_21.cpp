#include <iostream>
#include <vector>
#include <string>

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
    os << "{ ";
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        os << *it << ' ';
    }
    os << "}";

    return os;
}

int main()
{
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};

    std::cout << "v1: " << v1 << " - size: " << v1.size() << std::endl;
    std::cout << "v2: " << v2 << " - size: " << v2.size() << std::endl;
    std::cout << "v3: " << v3 << " - size: " << v3.size() << std::endl;
    std::cout << "v4: " << v4 << " - size: " << v4.size() << std::endl;
    std::cout << "v5: " << v5 << " - size: " << v5.size() << std::endl;
    std::cout << "v6: " << v6 << " - size: " << v6.size() << std::endl;
    std::cout << "v7: " << v7 << " - size: " << v7.size() << std::endl;

    return 0;
}
