
#include <stdio.h>

int digitSum(int n) {
    int sum = 0;

    while(n > 0) {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    return sum;
}

int main() {
    int n, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(digitSum(arr[i]) == digitSum(arr[j])) {
                count++;
            }
        }
    }

    printf("Number of pairs = %d", count);

    return 0;
}
