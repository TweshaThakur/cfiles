#include <stdio.h>
#include <stdlib.h>

//wap to search a number from a list of numbers stored in an array
int main()
{
    int matrix[3][4],i,j;
    int ;

    for (i=0 ; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("Enter value of matrix [%d][%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i=0 ; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
