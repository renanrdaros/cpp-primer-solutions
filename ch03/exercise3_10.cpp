#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;

    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    for (const auto& c : s) {
        if (!std::ispunct(c)) {
            std::cout << c;
        }
    }
    std::cout << std::endl;
    
    return 0;
}
