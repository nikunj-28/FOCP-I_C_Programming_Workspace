#include<stdio.h>
int main(){
    int a, b;
    printf("enter batch size = ");
    scanf("%d", &a);

    printf("enter fixed standard size = ");
    scanf("%d", &b);

    if (b == 0) {
        printf("invalid standard size");
    } else if (a % b == 0) {
        printf("divisible");
    } else {
        printf("not divisible");
    }
    return 0;
}

