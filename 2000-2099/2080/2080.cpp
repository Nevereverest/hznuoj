#include <algorithm>
#include <iostream>
int main() {
	long long a[4];
	for (int i = 0; i < 4; i++) {
		std::cin >> a[i];
	}
	std::sort(a, a + 4);
	if (a[0] == 0 || a[1] == 0 || a[2] == 0 || a[3] == 0)std::cout << "No" << std::endl;
	else {
		if (a[3] - a[2] - a[1] < a[0])std::cout << "Yes" << std::endl;
		else std::cout << "No" << std::endl;
	}
}