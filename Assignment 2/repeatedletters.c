
#include <stdio.h>

int main() {
    char s[1000];
    int count = 1;

    printf("Enter a string: ");
    scanf("%999s", s);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == s[i+1]) {
            count++;
        }
        else {
            printf("%c%d", s[i], count);
            count = 1;
        }
    }

    return 0;
}
