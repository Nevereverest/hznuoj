#include <iostream>
int main() {
    std::string str1, str2;
    while (std::cin >> str1 >> str2) {
        if (str1.find(str2) != str1.npos)std::cout << str1.find(str2) << std::endl;
        else std::cout << -1 << std::endl;
    }
}