#include <algorithm>
#include <iostream>
int main() {
    int x1, x2;
    int y1, y2;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    std::cout << abs(x1 - x2) + abs(y1 - y2) << " " << std::max(abs(x1 - x2), abs(y1 - y2)) << std::endl;
}