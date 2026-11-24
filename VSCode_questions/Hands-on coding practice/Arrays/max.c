#include<stdio.h>
int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        printf("enter the elements: ");
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d is the max",max);
    return 0;
}