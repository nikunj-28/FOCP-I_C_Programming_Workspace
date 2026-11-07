#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if(n<0){
        printf("invalid");
    }
    else{
        printf("square root is %.2f",pow(n,0.5));
    }
    return 0;
}