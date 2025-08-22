#include <iostream>
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < 3 * n; i++) std::cout << "*";
    std::cout << std::endl;
    for (int i = 2; i <= n / 2; i++) {
        for (int j = 1; j <= 3 * n; j++) {
            if (j == i || j == 3 * n - (i - 1)) std::cout << "*";
            else std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (int i = n / 2 + 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i) std::cout << "*";
            else std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (int i = n + 1; i <= n * 2 - n / 2 - 1; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == n - (i - n)) std::cout << "*";
            else std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (int i = n * 2 - n / 2; i < 2 * n - 1; i++) {
        for (int j = 1; j <= 3 * n; j++) {
            if (j == 2 * n - 1 - i + 1 || j == 3 * n - (2 * n - 1 - i)) std::cout << "*";
            else std::cout << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < 3 * n; i++) std::cout << "*";
}