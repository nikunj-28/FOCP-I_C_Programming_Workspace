
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float n;
    scanf("%d %f", &choice, &n);

    switch (choice) {
        case 1:
            printf("Square = %.2f", n * n);
            break;
        case 2:
            if (n >= 0)
                printf("Square root = %.2f", sqrt(n));
            else
                printf("Invalid input");
            break;
        case 3:
            printf("Cube = %.2f", n * n * n);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
