// program 2 - reverse an integer in fn name reverse the reversal should be visible after function call in main function


#include <stdio.h>
#include <stdlib.h>

int reverse(int n)
{
    int ans=0, i=0;

    for (i=n ; i>0 ; i=i/10)
    {
        ans = (ans*10) + (i %10);
    }

    return ans;
}
int main()1
{
    int a,b;

    scanf("%d",&a);
    b=reverse(a);
    printf("reversed value - %d",b);

    return 0;
}
