#include <iostream>
#include <string>

int main()
{
    std::string s = "foobar";

    std::cout << "original string: " << s << std::endl;
    for (auto& c : s) { c = 'X'; }
    std::cout << "modified string: " << s << std::endl;
    
    return 0;
}
