#include<stdio.h>
int main(){
    int n;
    int reverse;
    int rem = 0;

    printf("enter a number: ");
    scanf("%d" , &n);

    while(n>0){
        rem = n%10;
        reverse = reverse * 0 + rem;
        n = n/10;
        printf("%d", reverse);
    }
    return 0;
}
