#include <iostream>
int main() {
    int n, k, a, b, c, count = 0;
    std::cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        a = i;
        for (int i = 1; i <= n; i++) {
            b = i;
            for (int i = 1; i <= n; i++) {
                c = i;
                if ((a + b) % k == 0 && (a + c) % k == 0 && (b + c) % k == 0)count++;
            }
        }
    }
    std::cout << count;
}