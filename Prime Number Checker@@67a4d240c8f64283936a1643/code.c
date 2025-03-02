#include <stdio.h>
int isprime(int a)
{
    int c=0;
    for(int i=2;i<a;i++)
    {
        if (a%i==0)
        c++;

    }
    if (c>0)
    return 0;
    else
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int num;
        scanf("%d",&num);
        printf("%d\n",isprime(num));

    }
    return 0;
}