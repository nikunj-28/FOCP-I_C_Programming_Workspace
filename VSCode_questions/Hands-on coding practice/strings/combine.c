#include<stdio.h>
int main(){
    char str[100] = "nikunj ";
    char str2[100] = "madaan";
    int size = 0;
    for(int i = 0; str[i] != '\0'; i++){
        size++;
    }
    for(int i = 0; str2[i] != '\0'; i++){
        str[size+i] = str2[i];
    }
    printf("%s",str);
    return 0;
}