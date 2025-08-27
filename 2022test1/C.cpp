#include <iostream>
int main() {
    int h1, m1, h2, m2, flag = 0;
    std::cin >> h1 >> m1 >> h2 >> m2;
    int h11, m11, h22, m22;
    std::cin >> h11 >> m11 >> h22 >> m22;
    int h111, m111, h222, m222;
    std::cin >> h111 >> m111 >> h222 >> m222;
    int min = (h2 * 60 + m2) - (h1 * 60 + m1) + (h22 * 60 + m22) - (h11 * 60 + m11) + (h222 * 60 + m222) - (h111 * 60 + m111);
    if (min >= 240) flag = 1;
    int h = 0;
    while (min >= 60) {
        h++;
        min = min - 60;
    }
    if (h == 0) std::cout << "0" << " " << min << std::endl;
    else std::cout << h << " " << min << std::endl;
    if (flag != 0) std::cout << "YES";
    else std::cout << "NO";
}