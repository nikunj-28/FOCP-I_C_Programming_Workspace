
#include <stdio.h>

void ts(int total) {
    int h, m, s;

    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    printf("%d %d %d", h, m, s);
}

int main() {
    int total;

    printf("enter total: ");
    scanf("%d", &total);

    ts(total);

    return 0;
}
