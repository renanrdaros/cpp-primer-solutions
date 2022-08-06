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
    Sales_data curr_item;
    double price;

    if (std::cin >> curr_item.book_number >> curr_item.units_sold >> price) {
        Sales_data prev_item = curr_item;
        int cnt = 1;

        while (std::cin >> curr_item.book_number >> curr_item.units_sold >> price) {
            if (curr_item.book_number == prev_item.book_number) {
                ++cnt;
            }
            else {
                std::cout << cnt << " transaction(s) for " << prev_item.book_number << std::endl;
                prev_item = curr_item;
                cnt = 1;
            }
        }

        std::cout << cnt << " transaction(s) for " << prev_item.book_number << std::endl;
    }

    return 0;
}
