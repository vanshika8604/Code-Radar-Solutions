#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')
    {
    if(ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U')
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