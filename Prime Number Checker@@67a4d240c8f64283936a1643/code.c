#include <stdio.h>
int isPrime(int a)
{
    int c=0;
    for(int i=1;i<=a;i++)
    {
        if (a%i==0)
        c++;

    }
    if (a==1)
    return 0;
    if (c>2)
    return 0;
    else
    return 1;
}
