#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string book_number;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data item;
    double price;

    while (cin >> item.book_number >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        cout << item.book_number << ' ' << item.units_sold << ' ' << item.revenue << ' '
             << ((item.units_sold != 0) ? item.revenue/item.units_sold : 0.0) << endl;
    }

    return 0;
}
