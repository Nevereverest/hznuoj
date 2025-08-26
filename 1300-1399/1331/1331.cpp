#include <iostream>
int main() {
    int t;
    std::cin >> t;
    int sum, diff;
    while (t--) {
        std::cin >> sum >> diff;
        if (diff == sum) {
            std::cout << "0 0" << std::endl;
            continue;
        }
        if (diff > sum) {
            std::cout << "impossible" << std::endl;
            continue;
        }
        int a, b;
        if ((diff + sum) % 2 != 0) {
            std::cout << "impossible" << std::endl;
            continue;
        }
        a = (diff + sum) / 2;
        b = sum - a;
        if (a < b) {
            int t = a;
            a = b;
            b = t;
        }
        std::cout << a << " " << b << std::endl;
    }
    return 0;
}