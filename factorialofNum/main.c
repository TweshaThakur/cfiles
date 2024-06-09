//calculate factorial of a number

#include <stdio.h>
#include <stdlib.h>

int recur(int n)
{
    int i =n, fact ;

    if (n==1 || n==0)
        return 1;

    for (i=n ; i>0 ; i--)
    {
        fact = n*recur(n-1);
    }
    return fact;
}

int main()
{
    int a, ans ;

    scanf("%d",&a);

    ans = recur(a);

    printf("factorial of number is = %d", ans);

    return 0;
}
