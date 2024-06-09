#include <stdio.h>
#include <stdlib.h>
//even multiple of 5 between 20 and 60

int main()
{
    int num=0;

    scanf("%d",&num);

    if (num>=20 && num<=60)
    {
        if (num%2==0)
        {

            if (num%5==0)
            {
                printf("Yes %d is even multiple of 5 btw 20 and 60",num);
            }
        }
    }


    return 0;
}
