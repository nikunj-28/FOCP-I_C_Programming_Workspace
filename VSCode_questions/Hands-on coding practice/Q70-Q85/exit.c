#include <stdio.h>
#include <stdlib.h>

int main() {
    int password;

    printf("Enter password: ");
    scanf("%d", &password);

    if (password != 1234) {
        printf("Wrong password!");
        exit(0);
    }

    printf("Login successful!");

    return 0;
}