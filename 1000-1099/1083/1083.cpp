#include <iostream>
int main() {
    char clock1[10][4] = { " _ ", "   ", " _ ", " _ ", "   ", " _ ", " _ ", " _ ", " _ ", " _ " };
    char clock2[10][4] = { "| |", "  |", " _|", " _|", "|_|", "|_ ", "|_ ", "  |", "|_|", "|_|" };
    char clock3[10][4] = { "|_|", "  |", "|_ ", " _|", "  |", " _|", "|_|", "  |", "|_|", " _|" };
    int s, a[4];
    while (std::cin >> a[0] >> a[1] >> a[2] >> a[3]) {
        for (int i = 0; i < 4; i++)
            std::cout << clock1[a[i]];
        std::cout << std::endl;
        for (int i = 0; i < 4; i++)
            std::cout << clock2[a[i]];
        std::cout << std::endl;
        for (int i = 0; i < 4; i++)
            std::cout << clock3[a[i]];
        std::cout << std::endl;
    }
}