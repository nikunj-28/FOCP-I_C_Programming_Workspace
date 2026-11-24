#include<stdio.h>
int main(){
    int size = 0;
    char str[] = "nikunj madaan";
    for(int i = 0; str[i] != '\0'; i++){
        size++;
    }
    char str2[size+1];
    for(int i = 0; i < size; i++){
        str2[i] = str[i];
    }
    printf("%s",str2);
    str2[size] = '\0';
    return 0;
}
