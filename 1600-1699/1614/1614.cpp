#include <iostream>
int main() {
	int p, n[23] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,4,6,4,0,2 };
	std::cin >> p;
	std::cout << n[p - 1];
}