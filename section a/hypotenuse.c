#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st side: ");
    scanf("%d", &a);
    printf("enter 2nd side: ");
    scanf("%d", &b);
    printf("enter 3rd side: ");
    scanf("%d", &c);

    if(a*a + b*b == c*c){
        printf("h is %d",c);
    }
        else if(b*b + c*c == a*a){
            printf("h is %d",a);
        }
        else if(c*c + a*a ==b*b){
            printf("h is %d",b);
        }
        else{
            printf("not a right angle triangle");
        }
    return 0;
}
