
#include <stdio.h>

int pairs(int arr[], int n, int target) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(target == arr[i] + arr[j]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, target;
    scanf("%d %d", &n, &target);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", pairs(arr, n, target));

    return 0;
}
