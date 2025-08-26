#include <iostream>
int main() {
	std::string str, cmp;
	std::cin >> str;
	cmp = str.substr(str.length() - 3, 3);
	if (cmp.compare("doc") == 0)
		std::cout << "Word" << std::endl;
	if (cmp.compare("xls") == 0)
		std::cout << "Excel" << std::endl;
	if (cmp.compare("ppt") == 0)
		std::cout << "PowerPoint" << std::endl;
}