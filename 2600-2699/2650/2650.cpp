#include <iostream>
int main() {
	std::string str;
	int t;
	std::cin >> t;
	while (t--) {
		int count = 0;
		std::cin >> str;
		std::string cmp = "aeiou";
		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; j < 5; j++) {
				if (str[i] == cmp[j])
					count++;
			}
		}
		std::cout << count << std::endl;
	}
}