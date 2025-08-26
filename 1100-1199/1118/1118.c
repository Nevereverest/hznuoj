#include <stdio.h>
int main() {
    char a[] = "ECFAJKLBDGHIVWZYMNOPQRSTUX";
    char b[] = "erwqtyghbnuiopsjkdlfazxcvm";
    char c;
    while ((c = getchar()) != '#') {
        if (c >= 'A' && c <= 'Z')putchar(a[c - 65]);
        else if (c >= 'a' && c <= 'z')putchar(b[c - 97]);
        else if (c == ' ')putchar(' ');
        else if (c == '\n')printf("\n");
    }
}
