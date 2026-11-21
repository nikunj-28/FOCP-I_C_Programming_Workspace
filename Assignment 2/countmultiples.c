#include<stdio.h>
int countMultiples(int n, int k){
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(i%k==0){
            count++;
        }
    }
    return count;
}
int main(){
    int n,k;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter k: ");
    scanf("%d",&k);
    printf("multiples from 1 to n are: %d",countMultiples(n,k));
    return 0;
}
