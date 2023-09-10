#include <vector>

int main()
{
    std::vector<int> vec1(10);

    // fill vec1
    for (decltype(vec1.size()) i = 0; i < vec1.size(); ++i) {
        vec1[i] = i;
    }

    // copy vec1 into vec2
    std::vector<int> vec2(vec1);

    return 0;
}
