#include <iostream>
int a[1000][1000];
bool pd1(int w[][1000], int q, int n) {
	int p = w[q][q];
	int flag1 = 1, flag2 = 1, flag3 = 1, flag4 = 1;
	for (int i = q; i <= n - q - 1; i++) if (w[q][i] != p) flag1 = 0;
	for (int i = q; i <= n - q - 1; i++) if (w[i][q] != p) flag2 = 0;
	for (int i = q; i <= n - q - 1; i++) if (w[n - q - 1][i] != p) flag3 = 0;
	for (int i = q; i <= n - q - 1; i++) if (w[i][n - 1 - q] != p) flag4 = 0;
	if (flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1) return true;
	else return false;
}
bool pd2(int w[][1000], int n) {
	int flag = 1;
	for (int i = 0; i <= (n + 1) / 2 - 2; ++i)
		if ((w[i][i] - w[i + 1][i + 1]) != -1) flag = 0;
	if (flag == 1) return true;
	else return false;
}
int main() {
	int n, flag1 = 1, flag2 = 1;
	std::cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			std::cin >> a[i][j];
	for (int i = 0; i <= (n + 1) / 2 - 1; ++i)
		if (pd1(a, i, n) == 0) flag1 = 0;
	if (pd2(a, n) == 0) flag2 = 0;
	if (flag1 == 1 && flag2 == 1) std::cout << "ok, you are a cool guy." << std::endl;
	else std::cout << "It's too cold." << std::endl;
}