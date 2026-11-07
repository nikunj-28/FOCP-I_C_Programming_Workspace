#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines (1-26): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 26) {
        printf("Please enter a valid number from 1 to 26.\n");
        return 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}