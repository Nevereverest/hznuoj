#include <iostream>
int main() {
	int n;
	std::string str;
	while (std::cin >> n) {
		for (int i = 0; i < n; i++) {
			std::cin >> str;
			if (str.compare("chopsticks") == 0) {
				std::cout << "chopsticks ";
				continue;
			}
			if (str.compare("bowl") == 0) {
				std::cout << "bowl ";
				continue;
			}
			if (str.compare("knife") == 0) {
				std::cout << "knife ";
				continue;
			}
			if (str.compare("fork") == 0) {
				std::cout << "fork ";
				continue;
			}
		}
		puts("");
	}
}