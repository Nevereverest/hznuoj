#include <cmath>
#include <iostream>
#include <iomanip>
int main() {
	int a0, a1, a2, a3;
	double l, r;
	std::cin >> a3 >> a2 >> a1 >> a0;
	std::cin >> l >> r;
	while (1) {
		double mid = 1.0 * (l + r) / 2;
		double fl = 1.0 * a3 * l * l * l + 1.0 * a2 * l * l + 1.0 * a1 * l + 1.0 * a0;
		double fr = 1.0 * a3 * r * r * r + 1.0 * a2 * r * r + 1.0 * a1 * r + 1.0 * a0;
		double fmid = 1.0 * a3 * mid * mid * mid + 1.0 * a2 * mid * mid + 1.0 * a1 * mid + 1.0 * a0;
		if (fabs(r - l) <= 0.001) {
			std::cout << std::fixed << std::setprecision(2) << mid << std::endl;
			break;
		}
		if (fabs(fmid) <= 0.001) {
			std::cout << std::fixed << std::setprecision(2) << mid << std::endl;
			break;
		}
		if (fl * fmid > 0)l = mid;
		else if (fr * fmid > 0)r = mid;
	}
}