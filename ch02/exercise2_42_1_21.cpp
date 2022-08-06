#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data data1, data2;
    double price;

    std::cin >> data1.book_number >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.book_number >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.book_number == data2.book_number) {
        Sales_data sum;
        sum.book_number = data1.book_number;
        sum.units_sold = data1.units_sold + data2.units_sold;
        sum.revenue = data1.revenue + data2.revenue;

        std::cout << sum.book_number << ' ' << sum.units_sold << ' ' << sum.revenue << ' '
                  << ((sum.units_sold != 0) ? sum.revenue/sum.units_sold : 0.0) << std::endl;

        return 0;
    }
    else {
        std::cerr << "Error: The items must have the same ISBN." << std::endl;
        return -1;
    }
}
