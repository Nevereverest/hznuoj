#include <iomanip>
#include <iostream>
int main() {
    double eps, nowfac = 1, sum = 0;
    std::cin >> eps;
    while (1) {
        double now = 1 / ((2 * nowfac - 1) * nowfac);
        sum = sum + now;
        if (now <= eps)break;
        nowfac = nowfac + 1.0;
    }
    std::cout << std::fixed << std::setprecision(6) << sum;
}