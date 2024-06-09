//calculate number of zeros in a number entered by user
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ctr;

    scanf("%d",&n);

    for (ctr=0,n ; n>0 ; n/10)
    {
        printf("Here");
        if (n%10==0)
        {
            ctr++;
        }
    }


    printf("Number of zeros are %d : ",ctr);

    return 0;
}
