#include<stdio.h> 
void dzt(double a,double b){ 
    if(a!=0&&b!=0) printf("= %.1f%+.1fi\n",a,b); 
    else if(b!=0) printf("= %.1fi\n",b); 
    else printf("= %.1f\n",a); 
} 
int main(){ 
    double a,b,c,d; 
    while(scanf("%lf %lf %lf %lf", &a, &b, &c, &d)!=EOF){ 
        printf("(%.1f%+.1fi) + (%.1f%+.1fi) ", a, b, c, d); 
        dzt(a+c,b+d); 
        printf("(%.1f%+.1fi) - (%.1f%+.1fi) ", a, b, c, d); 
        dzt(a-c,b-d); 
        printf("(%.1f%+.1fi) * (%.1f%+.1fi) ", a, b, c, d); 
        dzt(a*c-b*d,a*d+b*c); 
        printf("(%.1f%+.1fi) / (%.1f%+.1fi) ", a, b, c, d); 
        dzt((a*c+b*d)/(c*c+d*d),(-a*d+b*c)/(c*c+d*d)); 
    } 
}