#include<stdio.h>
int main(){
    int principle,rate,time;
    float SI;
    printf("enter principle amount: ");
    scanf("%d", &principle);
    printf("enter rate: ");
    scanf("%d", &rate);
    printf("enter time: ");
    scanf("%d", &time);

    printf("SI is : %d", (principle*rate*time)/100);
    return 0;
    


}

