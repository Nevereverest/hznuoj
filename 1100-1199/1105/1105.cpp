#include <iostream>
bool isprime(int x) {
	int i, j;
	for (j = 2; j * j <= x; j++) {
		if (x % j == 0)
			return false;
	}
	return true;
}
int main() {
	int a[13] = { 31,29,31,30,31,30,31,31,30,31,30,31 }, s, y, m, d;
	for (y = 1988; y <= 1989; y++) {
		if (y == 1999) a[1] = 28;
		for (m = 0; m < 12; m++) {
			for (d = 1; d <= a[m]; d++) {
				s = y * 10000 + (m + 1) * 100 + d;
				if (isprime(s)) {
					std::cout << s << "\n";
				}
			}
		}
	}
}