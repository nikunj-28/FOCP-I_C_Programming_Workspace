#include <stdio.h>

int main() {
    int arr[] = {10,20,10,40,50,40,20,3,50,4,5,4,1,2,5,7,8,10,50,40,300};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d is the min", min);
    return 0;
}
