#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    int k = 0;


    for (int i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }
    for (int j = 0; j < n2; j++) {
        merged[k++] = arr2[j];
    }

    
    for (int i = k - 1; i >= 0; i--) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}