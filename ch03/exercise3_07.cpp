#include <iostream>
#include <string>

int main()
{
    std::string s = "foobar";

    std::cout << "before range for: " << s << std::endl;
    for (char c : s) { c = 'X'; }
    std::cout << "after range for:  " << s << std::endl;

    return 0;
}
