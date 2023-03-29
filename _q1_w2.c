#include <stdio.h>

int countOccurrences(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int count = countOccurrences(arr, n, x);
    printf("Number of occurrences of %d in the array: %d\n", x, count);
    return 0;
}