#include<stdio.h>
int areaOfRectangle(int l , int b){
    int area = l*b;
    return area;
}
int main(){
    int l,b;
    printf("enter length: ");
    scanf("%d",&l);
    printf("enter breadth: ");
    scanf("%d",&b);
    printf("area is %d",areaOfRectangle(l,b));
    return 0;
}
