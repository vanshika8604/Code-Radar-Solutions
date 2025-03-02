#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase to simplify vowel checking
    char lower_ch = tolower(ch);

    // Check if it's a letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    }
    // Check if it's a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // Otherwise, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
