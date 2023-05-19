#include <iostream>

int main()
{
    std::cout << "Enter two numbers (lower first): ";
    int lo, hi;
    std::cin >> lo >> hi;

    // print the numbers in the half-open interval [lo, hi)
    while (lo < hi) {
    	std::cout << lo << " ";
        ++lo;
    }
    std::cout << std::endl;

    return 0;
}
