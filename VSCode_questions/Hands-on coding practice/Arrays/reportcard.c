#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("enter the elements: ");
        scanf("%d",&arr[i]);
    }
    int total = 0;
    for(int i = 0; i < 5; i++){
        total+=arr[i];
    }
    float percentage;
    for(int i = 0; i < 5; i++){
        percentage = (total/5);
    }
    printf("total marks: %d\n",total);
    printf("percentage is: %.2f\n",percentage);
    return 0;
}
