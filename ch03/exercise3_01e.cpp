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
    Sales_data data1, data2;
    double price;

    cin >> data1.book_number >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    cin >> data2.book_number >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.book_number == data2.book_number) {
        Sales_data sum;
        sum.book_number = data1.book_number;
        sum.units_sold = data1.units_sold + data2.units_sold;
        sum.revenue = data1.revenue + data2.revenue;

        cout << sum.book_number << ' ' << sum.units_sold << ' ' << sum.revenue << ' '
                  << ((sum.units_sold != 0) ? sum.revenue/sum.units_sold : 0.0) << endl;

        return 0;
    }
    else {
        cerr << "Error: The items must have the same ISBN." << endl;
        return -1;
    }
}
