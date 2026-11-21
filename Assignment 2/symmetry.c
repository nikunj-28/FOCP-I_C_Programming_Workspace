
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                count++;
            }
        }
    }

    if(count == 0) {
        printf("YES");
    }
    else {
        printf("NO");
    }

    return 0;
}
