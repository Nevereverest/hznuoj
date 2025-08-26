#include <iostream>
#include <map>
int main() {
	std::string s;
	int t, n;
	std::cin >> t;
	while (t--) {
		std::map<std::string, int> m;
		int k = 0;
		std::cin >> n;
		while (n--) {
			std::cin >> s;
			k += 1 - m.count(s);
			m[s]++;
		}
		std::cout << k << std::endl;
		for (auto it : m) {
			std::cout << it.first << ": " << it.second << std::endl;
		}
		std::cout << std::endl;
	}
}