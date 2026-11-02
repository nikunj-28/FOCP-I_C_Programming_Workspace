#include<stdio.h>
int main(){
    int p1;
    int p2;
    printf("enter p1");
    scanf("%d", &p1);
    printf("enter p2");
    scanf("%d", &p2);

    if(p1>p2){
        printf("p1 wins");
    }
    else{
        printf("p2 wins");
    }
    return 0;
}

