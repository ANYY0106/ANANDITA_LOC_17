#include <stdio.h>
//check wheather a strong number or not
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int strong(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum = sum+factorial(digit);
        temp /= 10;
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (strong(n)) {
        printf("%d is a strong number\n", n);
    } else {
        printf("%d is not a strong number\n", n);
    }
    return 0;
}