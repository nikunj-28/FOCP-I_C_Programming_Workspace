#include<stdio.h>
int main(){
    int a;
    float b;
    printf("enter number of employees: ");
    scanf("%d", &a);

    printf("enter basic salary: ");
    scanf("%f", &b);

    float c;
    c = b+.12*b;
    printf("net salary = %.2f",c);
    return 0;

}

