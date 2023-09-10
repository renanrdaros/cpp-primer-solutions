#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
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
    Sales_data item, total;
    double price;

    if (cin >> total.book_number >> total.units_sold >> price) {

        total.revenue = total.units_sold * price;

        while (cin >> item.book_number >> item.units_sold >> price) {
            if (item.book_number == total.book_number) {
                item.revenue = item.units_sold * price;
                total.units_sold += item.units_sold;
                total.revenue += item.revenue;
            }
            else {
                cerr << "Error: The items must have the same ISBN." << endl;
                return -1;
            }
        }

        cout << total.book_number << ' ' << total.units_sold << ' ' << total.revenue << ' '
                  << ((total.units_sold != 0) ? total.revenue/total.units_sold : 0.0) << endl;
    }

    return 0;
}
