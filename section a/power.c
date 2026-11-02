#include<stdio.h>
#include<math.h>

int main() {
    float x, y;

    printf("enter base number: ");
    scanf("%f", &x);

    printf("enter power: ");
    scanf("%f", &y);

    printf("x raised to the power y = %.2f", pow(x, y));

    return 0;
}
