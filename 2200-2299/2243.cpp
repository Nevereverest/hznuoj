#include <iostream>
int main() {
	int n, a, b, c, flag = 1;
	char temp;
	int s[8] = { 0 };
	std::cin >> n;
	while (n--) {
		std::cin >> a >> temp >> b >> temp >> c;
		if (a >= 0 && a <= 25) s[0]++;
		else if (a >= 26 && a <= 55) s[1]++;
		else if (a >= 56 && a <= 69) s[2]++;
		else if (a >= 70 && a <= 103) s[3]++;
		else if (a >= 104 && a <= 125) s[4]++;
		else if (a >= 200 && a <= 230) s[5]++;
		else if (a >= 231 && a <= 250) s[6]++;
		else s[7]++;
	}
	for (int i = 0; i < 8; i++) {
		if (flag) flag = 0;
		else std::cout << " ";
		std::cout << s[i];
	}
}