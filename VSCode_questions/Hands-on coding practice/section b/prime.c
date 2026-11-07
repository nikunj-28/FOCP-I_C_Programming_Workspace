#include<stdio.h>
int main(){
    int n;
    int count = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
        count++;
    }
    if(count == 2){
        printf("number is prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}
