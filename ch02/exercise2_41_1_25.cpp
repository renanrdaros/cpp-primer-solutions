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
    Sales_data total; // variable to hold data for the next transaction
    double price;

    // read the first transaction and ensure that there are data to process
    if (std::cin >> total.book_number >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans; // variable to hold the running sum

        // read and process the remaining transactions
        while (std::cin >> trans.book_number >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            // if we're still processing the same book
            if (total.book_number == trans.book_number) {
                // update the running total
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                // print results for the previous book
                std::cout << total.book_number << ' ' << total.units_sold << ' ' << total.revenue << ' '
                          << ((total.units_sold != 0) ? total.revenue/total.units_sold : 0 )
                          << std::endl;
                total = trans; // total now refers to the next book
            }
        }
        // print the last transaction
        std::cout << total.book_number << ' ' << total.units_sold << ' ' << total.revenue << ' '
                  << ((total.units_sold != 0) ? total.revenue/total.units_sold : 0.0 )
                  << std::endl;
    }
    else {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }

    return 0;
}
