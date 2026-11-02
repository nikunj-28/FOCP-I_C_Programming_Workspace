/*low=below 20000
medium = 20000-50000
high = above 50k*/

#include<stdio.h>
int main(){
    int s;
    printf("enter salary: ");
    scanf("%d", &s);

    if(s<20000){
        printf("low");
    }
    else{
        if(s>=20000 && s<=50000){
            printf("med");
        }
        else{
            if(s>50000){
                printf("high");
            }
            else{
                printf("invalid");
            }
        }
    }
    return 0;
}
