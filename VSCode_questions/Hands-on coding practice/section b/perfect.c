#include<stdio.h>

int main(){
    int n, sum = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n && n > 0){
        printf("perfect number");
    }
    else{
        printf("not perfect");
    }

    return 0;
}
