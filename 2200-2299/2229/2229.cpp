#include <iostream>
int main() {
	int n, m;
	std::cin >> n >> m;
	float ck = (float)(4 * n - m) / 2;
	float rb = (float)(m - 2 * n) / 2;
	if (((int)ck != ck) || ((int)rb != rb || ck < 0 || rb < 0)) {
		std::cout << "No answer" << std::endl;
	}
	else {
		std::cout << (int)ck << " " << (int)rb;
	}
}