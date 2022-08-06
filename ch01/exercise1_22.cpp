#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item sum;

    if(std::cin >> sum) {
        Sales_item current;

        while (std::cin >> current) {
            if (current.isbn() == sum.isbn()) {
                sum += current;
            }
            else {
                std::cerr << "Error: The items must have the same ISBN." << std::endl;
                return -1;
            }
        }

        std::cout << sum << std::endl;
    }

    return 0;
}
