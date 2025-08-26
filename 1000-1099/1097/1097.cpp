#include <iostream>   
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long m;
        std::cin >> m;
        if (m % 2 == 1) {
            std::cout << "0 0" << std::endl;
            continue;
        }
        if (m % 4 == 0)
            std::cout << m / 4 << " ";
        else
            std::cout << m / 4 + 1 << " ";
        std::cout << m / 2 << std::endl;
    }
}