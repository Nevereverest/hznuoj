#include <iostream>
#include <string>
int main() {
    std::string str1, str2;
    int year1, year2, day1, day2;
    std::cin >> str1;
    std::cin >> str2;
    if (str1.length() == 18) { year1 = std::stoi(str1.substr(6, 4)); day1 = std::stoi(str1.substr(10, 4)); }
    if (str1.length() == 15) { year1 = std::stoi("19" + str1.substr(6, 2)); day1 = std::stoi(str1.substr(8, 4)); }
    if (str2.length() == 18) { year2 = std::stoi(str2.substr(6, 4)); day2 = std::stoi(str2.substr(10, 4)); }
    if (str2.length() == 15) { year2 = std::stoi("19" + str2.substr(6, 2)); day2 = std::stoi(str2.substr(8, 4)); }
    if (year1 < year2) std::cout << 1 << std::endl;
    if (year1 > year2) std::cout << -1 << std::endl;
    if (year1 == year2 && day1 == day2) std::cout << 0 << std::endl;
    if (year1 == year2 && day1 > day2) std::cout << -1 << std::endl;
    if (year1 == year2 && day1 < day2) std::cout << 1 << std::endl;
}