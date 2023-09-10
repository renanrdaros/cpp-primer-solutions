#include <iostream>
#include <string>

int main()
{
    std::string s = "foobar";

    std::cout << "original string: " << s << std::endl;

    for (decltype(s.size()) i = 0; i < s.size(); ++i) {
        s[i] = 'X';
    }

    std::cout << "modified string: " << s << std::endl;

    return 0;
}
