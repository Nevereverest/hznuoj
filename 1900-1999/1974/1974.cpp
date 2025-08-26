#include <algorithm>
#include <iostream>
#include <sstream>
int main() {
	std::string str;
	std::getline(std::cin, str);
	std::istringstream sp(str);
	while (sp >> str) {
		std::reverse(str.begin(), str.end());
		std::cout << str << " ";
	}
}