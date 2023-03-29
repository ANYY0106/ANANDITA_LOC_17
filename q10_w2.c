#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    int alphabets = 0;
    int digits = 0;
    int special = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        
        if (isalpha(str[i])) {
            alphabets++;
        }
        
        else if (isdigit(str[i])) {
            digits++;
        }
    
        else {
            special++;
        }
    }

    printf("The number of alphabets in the string is: %d\n", alphabets);
    printf("The number of digits in the string is: %d\n", digits);
    printf("The number of special characters in the string is: %d\n", special);

    return 0;
}