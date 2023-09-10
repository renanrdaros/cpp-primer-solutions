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
    Sales_data curr_item;
    double price;

    if (cin >> curr_item.book_number >> curr_item.units_sold >> price) {
        Sales_data prev_item = curr_item;
        int cnt = 1;

        while (cin >> curr_item.book_number >> curr_item.units_sold >> price) {
            if (curr_item.book_number == prev_item.book_number) {
                ++cnt;
            }
            else {
                cout << cnt << " transaction(s) for " << prev_item.book_number << endl;
                prev_item = curr_item;
                cnt = 1;
            }
        }

        cout << cnt << " transaction(s) for " << prev_item.book_number << endl;
    }

    return 0;
}
