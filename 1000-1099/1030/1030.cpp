#include <iostream>
#include <vector>
int main() {
	int t, n, time;
	std::vector<int> v;
	std::cin >> t;
	while (t--) {
		v.clear();
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			int elem;
			std::cin >> elem;
			v.push_back(elem);
		}
		std::cin >> time;
		char op;
		int op1, op2;
		for (int i = 0; i < time; i++) {
			std::cin >> op;
			if (op == 'D') {
				std::cin >> op1;
				v.erase(v.begin() + op1);
			}
			if (op == 'U') {
				std::cin >> op1 >> op2;
				v.insert(v.begin() + op1, op2);
			}
			if (op == 'P') {
				for (auto i = v.begin(); i != v.end(); i++)
					std::cout << *i << " ";
				std::cout << std::endl;
			}
		}
		std::cout << std::endl;
	}
}