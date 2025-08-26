#include <iostream>
int main()
{
	int n;
	while (std::cin >> n) {
		int a, b, c, d;
		a = n / 7;
		n = n - a * 7;
		b = n / 5;
		n = n - b * 5;
		c = n / 3;
		n = n - c * 3;
		d = n / 2;
		n = n - d * 2;
		std::cout << a + b + c + d + n << std::endl;
	}
}
