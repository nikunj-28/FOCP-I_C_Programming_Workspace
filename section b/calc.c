#include <stdio.h>

int main() {
    float n1, n2;
    char op;

    printf("enter 2 numbers: ");
    scanf("%f %f", &n1, &n2);

    printf("enter an operator: ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%.2f", n1 + n2);
            break;
        case '-':
            printf("%.2f", n1 - n2);
            break;
        case '*':
            printf("%.2f", n1 * n2);
            break;
        case '/':
            if (n2 == 0) {
                printf("invalid");
            } else {
                printf("%.2f", n1 / n2);
            }
            break;
        default:
            printf("invalid input");
    }

    return 0;
}
