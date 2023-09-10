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

    if (s1.size() == s2.size()) {
        std::cout << "The strings have the same length." << std::endl;
    }
    else if (s1.size() > s2.size()) {
        std::cout << "\"" << s1 << "\"" << " is longer than " << "\"" << s2 << "\"." << std::endl;
    }
    else { // s2.size() > s1.size()
        std::cout << "\"" << s2 << "\"" << " is longer than " << "\"" << s1 << "\"." << std::endl;
    }

    return 0;
}
