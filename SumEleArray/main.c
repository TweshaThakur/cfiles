#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s;

    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Passing elements by value :");

    for (int i=0 ; i<n ; i++)
    {
        //getval(arr[i]);
        s=sum(arr[i]);

    }
    printf("%d",s );
    return 0;
}


int sum(int u)
// using static summing elements using a function
{
    static int s=0;
    s=s+u;
    return s;
}

/**void getval(int u)
// printing array s elements
{
    printf("\t%d",u);
}**/
