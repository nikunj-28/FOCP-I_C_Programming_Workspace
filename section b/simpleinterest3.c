
#include <stdio.h>
int main() {
    int i;
    float p, r, n, si;
    for (i = 1; i <= 3; i++) {
        scanf("%f %f %f", &p, &r, &n);
        si = (p * r * n) / 100;
        printf("SI = %.2f\n", si);
    }
    return 0;
}
