#include <algorithm>
#include <iostream>
int main(){
	int n, c, d, sum = 0;
	int a[10001], b[10001];
	std::cin >> n;
	for (int i = 0; i < n; i++)
		std::cin >> a[i] >> b[i];
	std::sort(a, a + n);
	std::sort(b, b + n);
	c = a[n / 2];
	d = b[n / 2];
	for (int i = 0; i < n; i++){
		sum += abs(a[i] - c);
		sum += abs(b[i] - d);
	}
	std::cout << sum << std::endl;
}
