
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    // Upper part of diamond
    for (int i = 1; i <= n; i++) {

        // Print blank spaces first
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars at boundaries and spaces inside
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    // Lower part of diamond
    for (int i = n - 1; i >= 1; i--) {

        // Print blank spaces first
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars at boundaries and spaces inside
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
