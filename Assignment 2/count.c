
#include <stdio.h>

int main() {
    char s[1000];
    int v = 0, c = 0, d = 0, sp = 0;

    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }

        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
           s[i]=='o' || s[i]=='u') {
            v++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z') {
            c++;
        }
        else if(s[i] >= '0' && s[i] <= '9') {
            d++;
        }
        else if(s[i] == ' ') {
            sp++;
        }
    }

    printf("%d %d %d %d", v, c, d, sp);

    return 0;
}
