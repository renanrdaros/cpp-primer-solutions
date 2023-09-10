#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter the first string: ";
    std::string s1;
    std::getline(std::cin, s1);

    std::cout << "Enter the second string: ";
    std::string s2;
    std::getline(std::cin, s2);

    if (s1 == s2) {
        std::cout << "The strings are equal." << std::endl;
    }
    else if (s1 > s2) {
        std::cout << "\"" << s1 << "\"" << " is larger than " << "\"" << s2 << "\"." << std::endl;
    }
    else { // s2 > s1
        std::cout << "\"" << s2 << "\"" << " is larger than " << "\"" << s1 << "\"." << std::endl;
    }

    return 0;
}
