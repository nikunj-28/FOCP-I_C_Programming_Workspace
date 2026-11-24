#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "GYOWhiugwgc97eg HGDech893";

    for(int i = 0; i < strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90){
            str[i] += 32;
        }
    }

    printf("%s",str);
    return 0;
}