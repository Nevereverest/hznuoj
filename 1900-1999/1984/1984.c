#include<stdio.h>
#include<math.h>

int happy(int year, int month, int day);
int year, month, day;
char ch;

int main() {
    while (scanf("%d%c%d%c%d", &year, &ch, &month, &ch, &day) != EOF) {
        printf("%d\n", happy(year, month, day));
    }
    return 0;
}
int happy(int year, int month, int day) {
    if (year & 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31) return -2; else return 1;
        }
        if (month == 4 || month == 6 || month == 9 || month == 10) {
            if (day > 30) return -2; else return 1;
        }
        if (month == 2) {
            if (day > 29) return -2; else return 1;
        }
        if (month > 12) {
            return -1;
        }
    }
    else {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31) return -2; else return 1;
        }
        if (month == 4 || month == 6 || month == 9 || month == 10) {
            if (day > 30) return -2; else return 1;
        }
        if (month == 2) {
            if (day > 28) return -2; else return 1;
        }
        if (month > 12) {
            return -1;
        }
    }
}