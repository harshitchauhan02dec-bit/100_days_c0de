//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Prompt user for input
    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);

    // Check if the input is an alphabet
    if (isalpha(ch)) {
        // Convert to lowercase to simplify condition checking
        char lower = tolower(ch);

        // Check for vowels
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet character.\n", ch);
    }

    return 0;
}