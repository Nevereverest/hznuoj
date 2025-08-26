#include <iostream>
int main() {
	int a = 0, b = 0, n = 0, count, arr[2002], cnta, cntb, i;
	while (std::cin >> n) {
		for (i = 0; i < 2002; i++) arr[i] = 0;
		count = 0;
		while (count < n) {
			std::cin >> a >> b;
			arr[a] = b;
			count++;
		} cnta = 0, cntb = 0, i = 1;
		while (arr[i] > 0) {
			cnta++;
			i = arr[i];
		} i = 2;
		while (arr[i] > 0) {
			cntb++;
			i = arr[i];
		}
		if (cnta == cntb) { std::cout << "You are my brother" << std::endl; }
		else if (cnta > cntb) { std::cout << "You are my elder" << std::endl; }
		else if (cnta < cntb) std::cout << "You are my younger" << std::endl;
	}
}