#include <algorithm>
#include <iostream>
int main() {
    int a, b;
    while (std::cin >> a >> b) {
        std::cout << a << " " << b << " ";
        if (a > b) std::swap(a, b);
        int max = 0;
        for (int i = a; i <= b; i++) {
            int n = i, sum = 1;
            while (n != 1) {
                if (n % 2 == 1) n = 3 * n + 1;
                else n = n / 2;
                sum++;
            }
            if (sum > max) max = sum;
        }
        std::cout << max << std::endl;
    }
}
