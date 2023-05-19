// declaration errors

#include <iostream>

int main()
{
    int v1;
    std::cin >> v; // use of undeclared identifier 'v'
    cout << v1 << std::endl; // use of undeclared identifier 'cout'; did you mean 'std::cout'?
    return 0;
}
