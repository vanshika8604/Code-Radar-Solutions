#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if
    {
    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
    printf("Vowel");
    else
    printf("Consonant");
    }
    else if(ch>='0' && ch<='9')
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}