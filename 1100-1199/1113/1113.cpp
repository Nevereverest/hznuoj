#include <iostream>
int main() {
    long long n, m, y = 0, x = 0;
    while (std::cin >> n >> m) {
        if (n == 0 && m == 0) exit(0);
        if (m % 2 != 0) {
            std::cout << "Error" << std::endl;
            continue;
        }
        y = m / 2 - n;
        x = n - y;
        if (x >= 0 && y >= 0)
            std::cout << x << " " << y << std::endl;
        else std::cout << "Error" << std::endl;
    }
}