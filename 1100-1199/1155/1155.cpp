#include <iostream>
std::string table = "22233344455566677778889999";
int main() {
    std::string s;
    int c = 'a' - 'A';
    while (std::cin >> s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')s[i] = table[s[i] - 'a'];
            else if (s[i] >= 'A' && s[i] < 'Z')s[i] = s[i] + c + 1;
            else if (s[i] == 'Z')s[i] = 'a';
        }
        std::cout << s << std::endl;
    }
}
