#include <stdio.h>
#include <string.h>
#include <ctype.h>
//removal of non-alphabetic characters
int main() {
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++) {
        while(!(isalpha(str[i]))) {
            for(j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
    printf("String without non-alphabetic characters: %s\n", str);
    return 0;
}