#include <iostream>
int main() {
	int T;
	std::cin >> T;
	while (T--) {
		int L, K, x = 0, h = 300, i, G, s;
		std::cin >> L >> K;
		if (K == 0) {
			if (L < 6) G = 0;
			else if (6 <= L && L < 11) G = 4;
			else if (11 <= L && L < 16) G = 7;
			else G = 10;
		}
		else {
			if (L < 6) G = 0;
			else if (6 <= L && L < 11) G = 5;
			else if (11 <= L && L < 16) G = 8;
			else G = 12;
		}
		for (i = 0; i < 5; i++) {
			std::cin >> s;
			while (s > 0) {
				if (G == 0) break;
				s -= 300;
				G--;
			}
			if (s <= 0) x++;
		}
		switch (x) {
		case 0:printf("none\n"); break;
		case 1:printf("first blood\n"); break;
		case 2:printf("double kill\n"); break;
		case 3:printf("triple kill\n"); break;
		case 4:printf("ultra kill\n"); break;
		case 5:printf("rampage\n"); break;
		}
		std::cout << std::endl;
	}
}