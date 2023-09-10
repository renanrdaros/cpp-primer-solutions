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
    Sales_data total; // variable to hold data for the next transaction
    double price;

    // read the first transaction and ensure that there are data to process
    if (cin >> total.book_number >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans; // variable to hold the running sum

        // read and process the remaining transactions
        while (cin >> trans.book_number >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            // if we're still processing the same book
            if (total.book_number == trans.book_number) {
                // update the running total
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                // print results for the previous book
                cout << total.book_number << ' ' << total.units_sold << ' ' << total.revenue << ' '
                          << ((total.units_sold != 0) ? total.revenue/total.units_sold : 0 )
                          << endl;
                total = trans; // total now refers to the next book
            }
        }
        // print the last transaction
        cout << total.book_number << ' ' << total.units_sold << ' ' << total.revenue << ' '
                  << ((total.units_sold != 0) ? total.revenue/total.units_sold : 0.0 )
                  << endl;
    }
    else {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1; // indicate failure
    }

    return 0;
}
