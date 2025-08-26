#include <iostream>
int main()
{
	std::string str;
	int t;
	std::cin >> t;
	while (t--)
	{
		long long  m;
		std::cin >> str >> m;
		long long sum = 1;
		long long number = 0;
		long long count = 1;
		if (str.length() > 7) {
			number = m - 1;
		}
		else {
			for (int i = 0; i < str.length(); i++)
				number = number * 10 + (str[i] - '0');
		}
		if (number >= m)
			number = m - 1;
		for (int i = 1; i <= number; i++) {
			count = (i * count) % m;
			sum = (sum + count) % m;
		}
		std::cout << sum % m << std::endl;
	}
}