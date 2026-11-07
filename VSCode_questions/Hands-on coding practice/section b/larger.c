#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("score 1 = ");
    scanf("%d", &s1);
    printf("score 2 = ");
    scanf("%d", &s2);
    printf("score 3 = ");
    scanf("%d", &s3);

    if(s1 > s2 && s1 > s3){
        printf("1 wins");
    }
    else if(s2 > s1 && s2 > s3){
        printf("2 wins");
    }
    else{
        printf("3 wins");
    }
    return 0;

}
