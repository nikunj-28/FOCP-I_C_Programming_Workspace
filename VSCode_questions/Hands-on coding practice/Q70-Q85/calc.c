#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int op;
    printf("enter a number : ");
    scanf("%d", &n);
    printf("enter an operation (sq,sqrt,cube) : ");
    scanf("%d",&op);
    switch(op){
        case 1:
        printf("square is %.2f",pow(n,2));
        break;
        case 2:
        printf("square root is %.2f",pow(n,0.5));
        break;
        case 3:
        printf("cube is %.2f",pow(n,3));
        break;
        default:printf("inalid operation");
    }
    return 0;
}