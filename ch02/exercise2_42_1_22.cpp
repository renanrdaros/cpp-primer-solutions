#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data item, total;
    double price;

    if (std::cin >> total.book_number >> total.units_sold >> price) {

        total.revenue = total.units_sold * price;

        while (std::cin >> item.book_number >> item.units_sold >> price) {
            if (item.book_number == total.book_number) {
                item.revenue = item.units_sold * price;
                total.units_sold += item.units_sold;
                total.revenue += item.revenue;
            }
            else {
                std::cerr << "Error: The items must have the same ISBN." << std::endl;
                return -1;
            }
        }

        std::cout << total.book_number << ' ' << total.units_sold << ' ' << total.revenue << ' '
                  << ((total.units_sold != 0) ? total.revenue/total.units_sold : 0.0) << std::endl;
    }

    return 0;
}
