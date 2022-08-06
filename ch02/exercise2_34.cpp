#include <iostream>

int main()
{
    int i = 0, &r = i;
    const int ci = i, &cr = ci;
    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

    std::cout << "before assignments" << std::endl;
    std::cout << '\t' << "a: " << a << std::endl;
    std::cout << '\t' << "b: " << b << std::endl;
    std::cout << '\t' << "c: " << c << std::endl;

    a = 42;
    b = 42;
    c = 42;
    // d = 42;
    // e = 42;
    // g = 42;

    std::cout << "after assignments" << std::endl;
    std::cout << '\t' << "a: " << a << std::endl;
    std::cout << '\t' << "b: " << b << std::endl;
    std::cout << '\t' << "c: " << c << std::endl;

    return 0;
}
