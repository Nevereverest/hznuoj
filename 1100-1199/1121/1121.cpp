#include <algorithm>
#include <iostream>
int main(){
    int n;
    while (~scanf("%d", &n) && n){
        if (n < 4) printf("10\n");
        else if (n <= 8) printf("%d\n", 10 + 2 * (n - 4));
        else{
            int cnt = n / 8;
            int x = n % 8;
            if (x == 0) printf("%d\n", 18 * cnt);
            else {
                double ad1 = 2.4 * x;
                double ad2 = 10;
                if (x > 4)
                    ad2 += 2 * (x - 4);
                double ans = cnt * 18 + std::min(ad1, ad2);
                if ((int)ans == ans) printf("%.0f\n", ans);
                else printf("%.1f\n", ans);
            }
        }
    }
}
