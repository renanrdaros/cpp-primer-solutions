#include <iostream>

int main()
{
    std::cout << "Enter two numbers: ";
    int lo, hi;
    std::cin >> lo >> hi;

    if (lo > hi) {
        // swap numbers
        int tmp = lo;
        lo = hi;
        hi = tmp;
    }

    // print the numbers in the half-open interval [lo, hi)
    while (lo < hi) {
        std::cout << lo << " ";
        ++lo;
    }
    std::cout << std::endl;

    return 0;
}
