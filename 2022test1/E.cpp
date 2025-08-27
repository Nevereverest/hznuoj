#include <iostream>
int main() {
    char c;
    long long x1, x2, x3, x4, y1, sum;
    std::cin >> c;
    std::cin >> x1 >> x2 >> x3 >> x4 >> y1;
    sum = (x1 % 10) * (x2 % 10) * (x3 % 10) * (x4 % 10);
    sum = sum % 10;
    if (sum == y1 % 10 && c == 'p')
        std::cout << "hihihi,yaquyuebing,hihihi" << " " << sum;
    else std::cout << "meidechi,555" << " " << sum;
}