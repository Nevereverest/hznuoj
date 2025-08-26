#include <iostream>
int main() {
    int n, i = 0, j = 0;
    std::cin >> n;
    while (n > j) {
        i++;
        j = j + i;
    }
    if (i % 2 == 1)
        std::cout << j - n + 1 << "/" << i + n - j << std::endl;
    else
        std::cout << i + n - j << "/" << j - n + 1 << std::endl;
}