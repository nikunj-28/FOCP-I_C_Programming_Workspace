#include<stdio.h>
#include<string.h>
int main(){
    int vowel = 0;
    int consonant = 0;
    char str[100];

    printf("Enter string: ");
    scanf("%99s",str);

    for(int i = 0; i < strlen(str); i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
           str[i]=='o'||str[i]=='u'||str[i]=='A'||
           str[i]=='E'||str[i]=='I'||str[i]=='O'||
           str[i]=='U'){
            vowel++;
        }
        else if((str[i]>=65 && str[i]<=90) ||
                (str[i]>=97 && str[i]<=122)){
            consonant++;
        }
    }

    printf("Vowels = %d\n",vowel);
    printf("Consonants = %d\n",consonant);

    return 0;
}