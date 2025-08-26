#include <iostream>
std::string s;
bool lst(std::string s1) {
    for (int i = 0; i + s1.size() <= s.size(); i++) {
        int bj = 1;
        for (int j = i; j < i + s1.size(); j++) {
            if (s1[j - i] != s[j]) {
                bj = 0;
                break;
            }
        }
        if (bj)return true;
    }
    return false;
}
int main() {
    int n;
    std::cin >> n;
    while (n--) {
        std::cin >> s;
        int bj = 1;
        for (int i = s.size(); i > 0 && bj; i--) {
            for (int j = 0; j + i - 1 < s.size(); j++) {
                std::string s1;
                for (int k = i - 1; k >= 0; k--)s1 += s[j + k];
                if (lst(s1)) {
                    for (int i = s1.size() - 1; i >= 0; i--)std::cout << s1[i];
                    std::cout << std::endl;
                    bj = 0;
                    break;
                }
            }

        }
    }
}
