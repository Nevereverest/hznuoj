#include <algorithm>
#include <iostream>
int main() {
    long long x, y, z, a[4], k;
    std::cin >> x >> y >> z;
    for (int i = 0; i < 4; i++) {
        std::cin >> a[i];
    }
    std::cin >> k;
    std::sort(a, a + 4);
    long temp = (a[1] + a[2] + a[3]) * k;
    if (temp >= x) std::cout << "A";
    if (temp < x && temp >= y) std::cout << "B";
    if (temp < x && temp < y && temp >= z) std::cout << "C";
    if (temp < x && temp < y && temp < z) std::cout << "POOR";
}