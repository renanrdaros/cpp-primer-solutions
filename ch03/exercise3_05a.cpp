#include <iostream>
#include <string>

int main()
{
    std::string input, concat;

    while (std::getline(std::cin, input)) {
        concat += input;
    }

    std::cout << concat << std::endl;
    
    return 0;
}
