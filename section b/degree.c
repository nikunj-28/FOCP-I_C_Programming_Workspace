#include<stdio.h>
int main(){
/*degree = 75+
diploma bw 50 to 75
certificate <50*/
    int marks;

    printf("enter marks: ");
    scanf("%d", &marks);

    if(marks>75){
        printf("degree");
    }
    else if(marks<50){
        printf("certificate");
    }
    else{
        printf("diploma");
    }
    return 0;
}
