#include<stdio.h>
int main(){
    int a,b;
    printf("enter 1st number: ");
    scanf("%d", &a);

    printf("enter 2nd number: ");
    scanf("%d", &b);

    printf("numbers before swapping:\n%d\n%d\n", a, b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("numbers after swapping:\n%d\n%d\n",a,b);

    return 0;

    

}