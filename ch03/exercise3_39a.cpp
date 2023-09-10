#include <iostream>
#include <string>

int main()
{
    std::string s1("c++");
    std::string s2("primer");

    if (s1 < s2) {
        std::cout << "\"" << s1 << "\" < \"" << s2 << "\"" << std::endl;
    }
    else if (s1 > s2) {
        std::cout << "\"" << s1 << "\" > \"" << s2 << "\"" << std::endl;
    }
    else {
        std::cout << "\"" << s1 << "\" == \"" << s2 << "\"" << std::endl;
    }

    return 0;
}
