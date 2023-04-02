#include <stdio.h>
// convert decimal to binary
void decimal_to_binary(int decimal)
{
    int binary[32];
    int i = 0;
    while (decimal > 0)
    {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("binary number: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d\n", binary[j]);
    }
}

int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d\n", &decimal);
    decimal_to_binary(decimal);
    return 0;
}