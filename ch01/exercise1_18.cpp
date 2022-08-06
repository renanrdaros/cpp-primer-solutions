#include <iostream>

int main()
{
    int curr_val = 0, val = 0;

    if (std::cin >> curr_val) {

        int cnt = 1;

        while (std::cin >> val) {
            if (val == curr_val) {
                ++cnt;
            }
            else {
                std::cout << curr_val << " occurs " << cnt << " time(s)" << std::endl;
                curr_val = val;
                cnt = 1;
            }
        }

        std::cout << curr_val << " occurs " << cnt << " time(s)" << std::endl;
    }
    
    return 0;
}
