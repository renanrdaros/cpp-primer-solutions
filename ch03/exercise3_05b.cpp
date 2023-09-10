#include <iostream>
#include <string>

int main()
{
    std::string input, concat;

    if (std::getline(std::cin, concat)) {
        while (std::getline(std::cin, input)) {
            concat += ' ' + input;
        }
    }

    std::cout << concat << std::endl;

    return 0;
}
