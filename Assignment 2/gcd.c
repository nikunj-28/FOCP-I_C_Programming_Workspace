#include<stdio.h>
int gcd(int a, int b){
    if(a==0)return b;
    if(b==0)return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    printf("enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("gcd is: %d", gcd(a,b));
    return 0;
}
