#include <iostream>
#include <cstring>
#include <cstddef>

int main()
{
    const char str1[] = "The C++ Programming Language - ";
    const char str2[] = "Bjarne Stroustrup";

    constexpr std::size_t str3_size = std::strlen(str1) + std::strlen(str2) + 1;
    char str3[str3_size];

    std::strcat(std::strcpy(str3, str1), str2);

    std::cout << str3 << std::endl;

    return 0;
}
