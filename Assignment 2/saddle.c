
#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            int count = 0;

            for(int k = 0; k < c; k++) {
                if(a[i][j] > a[i][k]) {
                    count++;
                }
            }

            for(int k = 0; k < r; k++) {
                if(a[i][j] < a[k][j]) {
                    count++;
                }
            }

            if(count == 0) {
                printf("%d %d %d", i, j, a[i][j]);
                return 0;
            }
        }
    }

    printf("None");

    return 0;
}
