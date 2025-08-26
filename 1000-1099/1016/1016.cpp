#include <iostream>
#include <string>
int main() {
	std::string str;
	while (std::getline(std::cin, str)) {
		int count = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '{')count++;
			if (str[i] == '}')count--;
			if (str[i] == '#')break;
			if (str[i] == 'p')exit(EXIT_SUCCESS);
		}
		if (count == 0)std::cout << "paired" << std::endl;
		else std::cout << "unpaired" << std::endl;
	}
}