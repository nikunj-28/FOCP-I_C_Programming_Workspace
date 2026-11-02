#include<stdio.h>
int main(){
    int D;
    int b;
    int a;
    int c;

    printf("enter b = ");
    scanf("%d", &b);
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter c = ");
    scanf("%d", &c);

    D = b*b - 4*a*c;

    if(D == 0){
        printf("real and equal");
    }
    else if(D >= 0){
        printf("real and unequal");
    }
    else{
        printf("imaginary");
    }
    return 0;
}

