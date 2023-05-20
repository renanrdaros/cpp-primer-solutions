#include <iostream>
#include <string>

struct Sales_data
{
    std::string book_number;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data item;
    double price;

    while (std::cin >> item.book_number >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        std::cout << item.book_number << ' ' << item.units_sold << ' ' << item.revenue << ' '
                  << ((item.units_sold != 0) ? item.revenue/item.units_sold : 0.0) << std::endl;
    }

    return 0;
}
