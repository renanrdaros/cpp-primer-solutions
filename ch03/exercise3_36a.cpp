#include <iostream>
#include <iterator>

using std::begin;
using std::end;

// are_equal() gets pointers to first and one past the last elements of the arrays to compare
bool are_equal(const int* begin1, const int* end1, const int* begin2, const int* end2)
{
    if ((end1 - begin1) != (end2 - begin2)) return false; // arrays differ in size

    for ( ; begin1 != end1; ++begin1, ++begin2) {
        if (*begin1 != *begin2) return false; // found a difference
    }

    return true;
}

int main()
{
    int a0[] {1, 2, 3, 4, 5};
    int a1[] {1, 2, 4, 4, 5};
    int a2[] {1, 2, 4, 4, 5};
    int a3[] {1, 2, 4};

    std::cout << std::boolalpha; // print true/false instead of 1/0
    std::cout << "a0 == a1: " << are_equal(begin(a0), end(a0), begin(a1), end(a1)) << std::endl;
    std::cout << "a1 == a2: " << are_equal(begin(a1), end(a1), begin(a2), end(a2)) << std::endl;
    std::cout << "a2 == a3: " << are_equal(begin(a2), end(a2), begin(a3), end(a3)) << std::endl;

    return 0;
}
