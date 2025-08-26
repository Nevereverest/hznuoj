#include <algorithm>
#include <iostream>
int main() {
    int n, a[9];
    while (std::cin >> n) {
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }
        do {
            for (int i = 0; i < n; i++) {
                std::cout << a[i];
            }
            std::cout << "\n";
        } while (std::next_permutation(a, a + n));
        std::reverse(a, a + n);
        do {
            for (int i = 0; i < n; i++) {
                std::cout << a[i];
            }
            std::cout << "\n";
        } while (std::prev_permutation(a, a + n));
        std::cout << std::endl;
    }
}