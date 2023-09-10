#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main()
{
    std::vector<std::string> text;
    std::string s;

    // read text
    while (std::getline(std::cin, s)) {
        text.push_back(s);
    }

    // change the chars that correspond to the first paragraph to uppercase
    for (auto i = text.begin(); i != text.end() && !i->empty(); ++i) {
        for (auto j = i->begin(); j != i->end(); ++j) {
            *j = std::toupper(*j);
        }
    }

    // print text
    std::cout << "\n-------\n\n";
    for (auto i = text.cbegin(); i != text.cend(); ++i) {
        if (i->empty()) {
            std::cout << std::endl;
        }
        else {
            std::cout << *i << std::endl;
        }
    }
    std::cout << std::endl;

    return 0;
}
