#include<stdio.h>
int piecewise(int x){
    int ans;
    if(x<0){
        ans = x*(x+2)*(x+1);
    }
    else if(x>=10){
        ans = 5*x-7;
    }
    else{
        ans = 3*x+2;
    }
    return ans;
}
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    printf("answer is %d",piecewise(x));
    return 0;
}
