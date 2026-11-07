#include<stdio.h>

int main(){
    int n;
    int largest;
    int current;

    printf("enter number of entries: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("invalid entry\n");
        return 1;
    }

    printf("enter 1st number: \n");
    scanf("%d", &largest); // assumes first number is the largest

    for(int i = 2; i <= n; i++){ //i = 2 because first no. is assumed largest
        printf("enter number %d: \n", i);
        scanf("%d", &current);

        if(current > largest){
            largest = current;
        }
    }

    printf("largest is %d\n", largest);
    return 0;
}
