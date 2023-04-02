#include <stdio.h>
//sum of two 2D arrays
void add_arrays(int arr1[3][3], int arr2[3][3]) {
    int sum[3][3];
    printf("Sum of the arrays is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr1[3][3], arr2[3][3];
    printf("Enter elements of first array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements of second array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    add_arrays(arr1, arr2);
    return 0;
}