#include <iostream>
int main() {
    int v, d, x, y, t, q;
    while (std::cin >> v >> d) {
        t = -1;
        y = 0;
        x = 1;
        while (1) {
            y += x * d;
            t = t + x;
            x++;
            t++;
            if (y >= v)
                break;
        }
        q = (y - v) / d;
        t = t - q;
        std::cout << t << std::endl;
    }
}