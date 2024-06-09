//fail program !!!!!!!!!
//aborted codinggg

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mth=0,eng=0,chem=0,sum=0,avg=0;

    scanf("%d\n",&mth);
    scanf("%d\n",&eng);
    scanf("%d",&chem);


    sum=mth+eng+chem;
    printf("here");

    switch (sum) // this exp can be either a int or char only
    // constants data type should be same as the data type of expression given
    //to execute multiple cases remove break from cases
    // default if no case is successful --> good practice (not mandatory)
    // switch can not be nested
    {

    case 1 : // case label int or char only compilation error
        if (sum>=270)
        {
            printf("Grade : O");
        }
        break;
    case 2:
        if (sum>=255)
        {
            printf("Grade : A");
        }
        break;
    case 3:
        if (sum>=240)
        {
            printf("Grade : B");
        }
        break;
    case 4:
        if (sum<90)
        {
            printf("Grade : F");
        }
        break;
    case 5:
        if (sum>90&&avg<135)
        {
            printf("Grade : E");
        }
        break;
    }



    return 0;
}
