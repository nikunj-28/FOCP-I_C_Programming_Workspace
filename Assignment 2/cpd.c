
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = abs(arr[0] - arr[1]);

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);

            if(diff < min) {
                min = diff;
            }
        }
    }

    printf("Minimum difference = %d", min);

    return 0;
}
