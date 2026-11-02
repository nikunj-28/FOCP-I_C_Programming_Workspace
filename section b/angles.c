#include<Stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st angle: ");
    scanf("%d", &a);
    printf("enter 2nd angle: ");
    scanf("%d", &b);
    printf("enter 3rd angle: ");
    scanf("%d", &c);

    if(a+b+c == 180){
        printf("triangle");
    }
    else{
        printf("not triangle");
    }
    return 0;

    
}