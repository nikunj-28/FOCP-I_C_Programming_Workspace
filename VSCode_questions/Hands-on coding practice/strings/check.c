#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int i;

    printf("Enter first string: ");
    scanf("%99s",str1);

    printf("Enter second string: ");
    scanf("%99s",str2);

    for(i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++){
    }

    if(str1[i] == str2[i]){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }

    return 0;
}