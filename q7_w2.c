#include <stdio.h>

int main() {
    int arr[] = {4, -6, 3, -8, 0, 2, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = n - 1;

    while (left <= right) {
    
        while (arr[left] < 0 && left <= right) {
            left++;
        }

        
        while (arr[right] >= 0 && left <= right) {
            right--;
        }

        
        if (left <= right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    printf("The modified array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
