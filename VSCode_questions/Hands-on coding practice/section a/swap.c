#include<stdio.h>

int main() {
    int a, b, c;

    printf("enter 1st number: ");
    scanf("%d", &a);

    printf("enter 2nd number: ");
    scanf("%d", &b);

    printf("numbers before swapping: %d, %d\n", a, b);

    c = a;
    a = b;
    b = c;

    printf("after swapping: %d, %d\n", a, b);

    return 0;
}
