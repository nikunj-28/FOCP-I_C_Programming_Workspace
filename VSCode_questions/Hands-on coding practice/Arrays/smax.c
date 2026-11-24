#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("enter the elements: ");
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int smax=INT_MIN;
    for(int i = 0; i < 5; i++){
        if(arr[i]>smax && arr[i]!=max){
            smax = arr[i];
        }
    }
    printf("%d is max\n",max);
    printf("%d is smax",smax);
    return 0;
}