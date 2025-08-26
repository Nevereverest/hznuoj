#include <iostream>
#include <string>
int main() {
    std::string s;
    std::getline(std::cin, s);
    char cmd, x, y, len = s.size();
    std::cin >> cmd;
    if (cmd == 'D') {
        std::cin >> x;
        int i, t = 0, jug = 0;
        for (i = 0; i < len; i++)
            if (s[i] == x)
                break;
        if (i >= len)
            std::cout << "wrong!" << std::endl;
        else {
            for (i = 0; i < len; i++) {
                if (s[i] == x && jug == 0) {
                    jug = 1;
                    continue;
                }
                std::cout << s[i];
            }
            std::cout << std::endl;
        }

    }
    else if (cmd == 'I') {
        std::cin >> x >> y;
        int i, t;
        for (i = len; i >= 0; i--)
            if (s[i] == x) {
                t = i;
                break;
            }
        if (i < 0)
            std::cout << "wrong!" << std::endl;
        else {
            for (int i = 0; i < len; i++) {
                if (i == t) {
                    std::cout << y << x;
                    continue;
                }
                std::cout << s[i];
            }
            std::cout << std::endl;
        }
    }
    else if (cmd == 'R') {
        int i, jug = 0;
        std::cin >> x >> y;
        for (i = 0; i < len; i++)
            if (s[i] == x)
                break;
        if (i >= len)
            std::cout << "wrong!" << std::endl;
        else {
            for (int i = 0; i < len; i++) {
                if (s[i] == x)
                    s[i] = y;
                std::cout << s[i];
            }
            std::cout << std::endl;
        }
    }
}