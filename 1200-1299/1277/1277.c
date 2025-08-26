#include <stdio.h>
int p(long long n) {
    int t = n;
    for(int i = 2;i <= n;i++) {
        if(n % i == 0) {
            t -= t / i;
            while(n % i == 0) n /= i;
        }
    }
    return t;
}
int main() {
    long long n;
    while(scanf("%lld",&n) && n) printf("%lld\n",p(n));
}
