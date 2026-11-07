#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int rem;
    int rev = 0;
    int q;
    printf("enter a number : ");
    scanf("%d", &n);
    q=n;
    while(q>0){
        rem = q % 10;
        rev = rev * 10 + rem;
        q = q / 10;
    }
    if(rev == n){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    return 0;
}