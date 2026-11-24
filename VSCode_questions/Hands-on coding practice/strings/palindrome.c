#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int flag = 0;

    printf("Enter string: ");
    scanf("%99s",str);

    int size = strlen(str);

    for(int i = 0, j = size-1; i < j; i++, j--){
        if(str[i] != str[j]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }

    return 0;
}