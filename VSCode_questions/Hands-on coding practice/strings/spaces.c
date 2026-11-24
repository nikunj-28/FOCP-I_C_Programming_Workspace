#include<stdio.h>
int main(){
    char str[100];
    int spaces = 0, words = 0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' '){
            spaces++;
        }
    }

    words = spaces + 1; // 1 space separates 2 words

    printf("Spaces = %d\n",spaces);
    printf("Words = %d",words);

    return 0;
}