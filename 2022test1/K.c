#include <stdio.h>
int n, d1, d2;
char ch1, ch2;
int main() {
	int t;
	scanf("%d", &t); getchar();
    while(t--){
        int ans = 0;
        scanf("%c %c %d %d", &ch1, &ch2, &d1, &d2);
        getchar();
        if(ch2 == 'E') {
            if(ch1<='D') {
                ans = (d1 * 2 + d2) * 2;   
                printf("%d\n", ans);
                printf("%c\n", ch1);
            } else {
                ans = (d1 + d2) * 2;
                printf("%d\n", ans);
            }
        } else if(ch1 == ch2 ||ch1 + 32 == ch2 ||ch1 == ch2 + 32) {
            ans = d1 + d2;
            printf("%d\n", ans);
            if(ch1 <='D') printf("%c\n", ch1);
            else printf("%c\n", ch2);
        } else {
            int cnt = 0;
            if(ch1 <='D') cnt += 1;
            if(ch2 <='D') cnt += 2;
            if(cnt == 0) {
                ans = d1 + d2 + d1 * d2;
                printf("%d\n", ans);
            } else if(cnt == 1) {
                ans = d1 + d2 + 2 * d1 * d2;
                printf("%d\n%c\n", ans, ch1);
            } else if(cnt == 2) {   
                ans = d1 + d2 + 2 * d1 * d2;
                printf("%d\n%c\n", ans, ch2);
            } else if(cnt == 3) {
                ans = d1 + d2 + 3 * d1 * d2;
                printf("%d\n%c %c\n", ans, ch1+32, ch2+32);
            }
        }
    }
}