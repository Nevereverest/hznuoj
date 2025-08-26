#include <algorithm>
#include <iostream>
int main() {
    int a, b, c;
    while (std::cin >> a >> b >> c) {
        if (a > c) std::swap(a, c);
        if (b > c) std::swap(b, c);
        if (a == 0 && b == 0 && c == 0) break;
        if (a * a + b * b == c * c) std::cout << "right" << std::endl;
        else std::cout << "wrong" << std::endl;
    }
}