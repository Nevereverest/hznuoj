#include <iostream>
#include <cctype>
#include <string>
int main() {
	std::string str;
	int count = 0;
	while (std::getline(std::cin, str)) {
		for (int i = 0; i < str.length(); i++) {
			if (isalpha(str[i]))
				count++;
		}
	}
	std::cout << count << std::endl;
}