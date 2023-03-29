#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
        
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);
    printf("The number of consonants in the string is: %d\n", consonants);

    return 0;
}