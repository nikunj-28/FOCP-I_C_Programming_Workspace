#include<stdio.h>
// #include<string.h>
// int main(){
//     char arr[] = "nikunj madaan";
//     printf("%", strlen(arr));
//     return 0;
// }

int main(){
    char str[] = "nikunj madaan";
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        count++;
    }
    printf("%d",count);
    return 0;
}

