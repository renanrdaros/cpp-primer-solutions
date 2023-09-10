#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter two numbers (lower first): ";
    int lo, hi;
    cin >> lo >> hi;

    // print a half-open interval - [lo, hi)
    while (lo < hi) {
    	cout << lo << " ";
        ++lo;
    }
    cout << endl;

    return 0;
}
