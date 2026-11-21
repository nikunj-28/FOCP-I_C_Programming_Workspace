#include <stdio.h>

int sqr(int n) {
    for(int i = 0; i <= n; i++) {
        if(i*i == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", sqr(n));

    return 0;
}
