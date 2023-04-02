#include <stdio.h>
//transpose of a 2D array
void transpose(int arr[3][3]) {
    int trans[3][3];
    printf("Transpose is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trans[i][j] = arr[j][i];
            printf("%d\n", trans[i][j]);
        }
       
    }
}

int main() {
    int arr[3][3];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    transpose(arr);
    return 0;
}