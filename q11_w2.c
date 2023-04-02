#include <stdio.h>
#include <math.h>
//armstrong number= sum of digits to the power three is the number itself
int armstrong(int number);

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}

int armstrong(int number) {
    int num_digits = 0, sum = 0, input_number = number;
    
    // Calculate the number of digits in the number
    while (input_number!= 0) {
        input_number /= 10;
        ++num_digits;
    }
    
    input_number = number;
    
    // Calculate the sum of the cubes of each digit
    while (input_number != 0) {
        int digit = input_number % 10;
        sum += pow(digit, num_digits);
        input_number /= 10;
    }
    
    // Check if the sum of the cubes of the digits equals the input number
    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}