#include <iostream>

int main()
{
    std::cout << "\62\115\012";   // 2M\n
    std::cout << "\62\x09\115\012"; // 2\tM\n
    return 0;
}
