#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data
{
    std::string book_number;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif // SALES_DATA_H
