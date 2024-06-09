#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration
    int i=100;
    int c=1;

    /**for (i=1 ; i<=20 ; ++i) // or instead of using conditional -- i+=2 update the conditional
    {
        if (i%2==0)
            printf("%d\n",i);
    }**/

    //multiples of 5 from 0 to 50 in reverse order

    /*for (i=50 ; i>0 ; i-=1)
    {
        if (i%5==0)
            printf("%d\n",i);
    }*/

    /**while (i<5)
    {
        printf("Hello\n");
        i++;
    }**/

    //multiples of ten in reverse order

    while (i>0)
    {
        if (i%10==0)
            {
                printf("10 X %d = %d\n",c,i);
                c++;
            }
        i--;

    }





    return 0;
}
