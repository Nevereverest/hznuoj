#include <stdio.h>
#include <string.h>
int main()
{
	char p[10000], * q;
	while (gets(p), strcmp(p, "END") != 0)
	{
		q = p;
		while (*q != '\0')
		{
			switch (*q)
			{
			case 'A':
			case 'W':
			case 'F': *q = 'I'; break;
			case 'D':
			case 'P':
			case 'G':
			case 'B': *q = 'e'; break;
			case 'C': *q = 'L'; break;
			case 'M':*q = 'o'; break;
			case 'S':*q = 'v'; break;
			case 'L': *q = 'Y'; break;
			case 'X': *q = 'u'; break;

			}
			q++;
		}
		puts(p);
	}
}
