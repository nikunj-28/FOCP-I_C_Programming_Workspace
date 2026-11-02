#include <stdio.h>

int main() {
    int start, end;

    printf("Enter starting and ending limits: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        int count = 0;
        // Count the factors of each number
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        // A prime number has exactly 2 factors
        if (count == 2) {
            printf("%d ", i);
        }
    }

    return 0;
}