#include<stdio.h>
#include<math.h>

int main() {
    float p, r, t;

    printf("enter principle amount: ");
    scanf("%f", &p);

    printf("enter rate: ");
    scanf("%f", &r);

    printf("enter time: ");
    scanf("%f", &t);

    printf("CI = %.2f", p * pow(1 + r / 100, t) - p);

    return 0;
}