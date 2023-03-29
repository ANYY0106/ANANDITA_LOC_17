#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 5, 5, 6, 6, 6, 6, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    int max_count = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > max_count) {
            max_count = count;
            max = arr[i];
        }
    }

    printf("The maximum occurring integer in the array is: %d\n", max);

    return 0;
}
