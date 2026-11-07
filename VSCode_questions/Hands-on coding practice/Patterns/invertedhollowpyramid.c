#include <stdio.h>

int main() {
    int n;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    // Print the first row completely
    for (int j = 1; j <= 2 * n - 1; j++) {
        printf("*");
    }
    printf("\n");

    // Print the bottom part
    for (int i = 2; i <= n; i++) {

        // Print leading spaces first
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars and inner spaces using if-else
        for (int j = i; j <= 2 * n - i; j++) {
            if (j == i || j == 2 * n - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}