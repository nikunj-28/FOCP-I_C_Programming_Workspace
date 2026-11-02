#include<stdio.h>

int main() {
    float radius;
    char op;

    printf("enter radius: ");
    scanf("%f", &radius);

    printf("enter an operator: ");
    scanf(" %c", &op);

    switch (op) {
        case 'a':
            printf("area is %.2f", 3.14 * radius * radius);
            break;
        case 'd':
            printf("diameter is %.2f", 2 * radius);
            break;
        case 'c':
            printf("circumference is %.2f", 2 * 3.14 * radius);
            break;
        default:
            printf("invalid");
    }

    return 0;
}
