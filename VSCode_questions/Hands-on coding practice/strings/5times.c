#include<stdio.h>
void fun(char n[]){
    for(int i = 0; i < 5; i++){
        printf("%s\n", n);
    }
}

int main(){
    char str[100];
    printf("Enter your name: ");
    scanf("%99s", str);
    fun(str);
    return 0;
}