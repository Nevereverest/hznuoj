#include <iostream>
int main() {
	std::string str1, str2;
	while (std::cin >> str1) {
		std::cin >> str2;
		if (str1.compare(str2) == 0)std::cout << 0 << std::endl;
		for (int i = 0; i < str1.length(); i++) {
			if (!(str1[i] == str2[i])) {
				std::cout << str1[i] - str2[i] << std::endl;
				break;
			}
		}
	}
}