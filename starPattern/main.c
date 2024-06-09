//print tables of n given number = nested loops
//print a right angle star pattern
// print star triangle pattern

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,j=0;
    scanf("%d",&n);

    for ( i=1 ; i<=n ; i++)
        {for (j=1 ; j<=10 ; j++)
        {
            printf("%d ", i*j);
        }
        printf("\n");}
    return 0;
}
