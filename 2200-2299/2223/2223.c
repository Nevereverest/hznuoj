#include <math.h>
#include <stdio.h>
#define EPS 1e-5
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        double X, a, b;
        int N, M;
        scanf("%lf %d %d %lf %lf", &X, &N, &M, &a, &b);
        int min_people = N + M + 10;
        int found = 0;
        for (int i = 0; i <= N; i++) {
            double male_load = i * a;
            if (male_load >= X - EPS) {
                if (i < min_people) {
                    min_people = i;
                }
                found = 1;
            } else {
                double need = X - male_load;
                if (b < EPS) {
                    continue;
                }
                if (need / b > M + EPS) {
                    continue;
                }
                double j0 = need / b;
                int j = (int)j0;
                if (j0 - j > EPS) {
                    j++;
                }
                int total_people = i + j;
                if (total_people < min_people) {
                    min_people = total_people;
                }
                found = 1;
            }
        }
        if (!found || min_people > N + M) {
            printf("you are too heavy to move!\n");
        } else {
            printf("%d\n", min_people);
        }
    }
}