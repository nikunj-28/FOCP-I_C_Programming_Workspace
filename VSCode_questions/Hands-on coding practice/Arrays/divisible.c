#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[10];
    for(int i = 0; i < 10; i++){
        printf("enter the elements: ");
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i]%3==0 && arr[i]%5==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}