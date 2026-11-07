#include<stdio.h>
int main(){
    int transamount;
    printf("enter transaction amount: ");
    scanf("%d", &transamount);

    if(transamount > 0){
        printf("positive");
    }
    else if(transamount < 0){
        printf("negative");
    }
    else{
        printf("neutral");
    }
    return 0;
}
