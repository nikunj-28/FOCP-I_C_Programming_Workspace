#include <stdio.h>

int main() {
    int s1, s2, s3;

    printf("enter 3 sides: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
        printf("invalid triangle");
    } else if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
        printf("not a triangle");
    } else if (s1 == s2 && s2 == s3) {
        printf("equilateral");
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("isosceles");
    } else {
        printf("scalene");
    }

    return 0;
}