#include <math.h>
#include <stdio.h>
int main() {
    double n,c,p,q;
    scanf("%lf%lf%lf%lf",&n,&c,&p,&q);
    printf("%.6f\n",pow(p*p/(p*p+q*q),n/2)*c);
}