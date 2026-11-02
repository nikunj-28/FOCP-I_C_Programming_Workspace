#include<stdio.h>
#include<math.h>
int main(){
    float n;
    printf("enter a number : ");
    scanf("%f", &n);
    while(n<0){
        printf("invalid, enter again : ");
        scanf("%f", &n);
    }
    printf("square root is: %.2f",sqrt(n));
    return 0;
}