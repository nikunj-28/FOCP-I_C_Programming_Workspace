#include <stdio.h>

int main() {
    int age;
    int nationality;

    printf("enter age: ");
    scanf("%d", &age);
    printf("enter nationality (1 for Indian, 0 for others): ");
    scanf("%d", &nationality);

    if (age >= 18 && nationality == 1) {
        printf("eligible");
    } else {
        printf("not eligible");
    }

    return 0;
}
