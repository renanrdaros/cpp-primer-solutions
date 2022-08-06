#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item current;

    if (std::cin >> current) {
        Sales_item previous = current;
        int cnt = 1;

        while (std::cin >> current) {
            if (current.isbn() == previous.isbn()) {
                ++cnt;
            }
            else {
                std::cout << cnt << " transaction(s) for " << previous.isbn() << std::endl;
                previous = current;
                cnt = 1;
            }
        }

        std::cout << cnt << " transaction(s) for " << previous.isbn() << std::endl;
    }

    return 0;
}
