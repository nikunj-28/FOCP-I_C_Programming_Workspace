#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("enter the elements: ");
        scanf("%d",&arr[i]);
    }
    int even = 0 , odd = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }
    }
    printf("sum of evens is %d\n",even);
    printf("sum of odds is %d",odd);
    return 0;
}