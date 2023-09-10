#include <iostream>
#include <string>

int main()
{
    std::string s = "foobar";

    std::cout << "original string: " << s << std::endl;

    decltype(s.size()) i = 0;
    while (i < s.size()) {
        s[i] = 'X';
        ++i;
    }

    std::cout << "modified string: " << s << std::endl;

    return 0;
}
