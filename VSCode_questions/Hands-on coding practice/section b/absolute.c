#include <stdio.h>

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("absolute value = %d", n);
    } else if (n < 0) {
        printf("absolute value = %d", -n);
    } else {
        printf("absolute value = 0");
    }

    return 0;
}
