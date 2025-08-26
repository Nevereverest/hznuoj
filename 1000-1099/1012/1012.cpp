#include <iostream>
#include <sstream>
int main() {
	int n;
	std::cin >> n;
	std::string str;
	getchar();
	while (n--) {
		std::getline(std::cin, str);
		std::cout << str << std::endl;
		std::cout << std::endl;
	}
	while (std::getline(std::cin, str)) {
		std::istringstream sp(str);
		while (sp >> str) {
			std::cout << str << std::endl;
			std::cout << std::endl;
		}
	}
}