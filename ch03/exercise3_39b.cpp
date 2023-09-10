#include <iostream>
#include <cstring>

int main()
{
    char s1[] = "c++";
    char s2[] = "primer";

    if (std::strcmp(s1, s2) < 0) {
        std::cout << "\"" << s1 << "\" < \"" << s2 << "\"" << std::endl;
    }
    else if (std::strcmp(s1, s2) > 0) {
        std::cout << "\"" << s1 << "\" > \"" << s2 << "\"" << std::endl;
    }
    else {
        std::cout << "\"" << s1 << "\" == \"" << s2 << "\"" << std::endl;
    }

    return 0;
}
