#include <stdio.h>
#include <stdlib.h>
// max num of passes to sort the list is n-1 in sort a[j]> a[j+1]
//n-i-1
// note - shifting indexes from last
// bubble sort , linear search , binary search -- sorting mechanism


// insert a value and delete a value at a specific index given by user
void insert(int arr[3][4],int m,int n)
{
 //printf("state the first and second index where u wish to to insert an element: ");
        //scanf("%d %d", &a ,&b);
        //insert(matrix , a,b);

}

void pop(int arr[3][4],int m,int n)
{


}

void display(int arr[3][4])
{

for (int i=0 ; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void search (int arr[3][4])
{
    // binary search in 2d array
    int mid;
    mid=low+high / 2;

    for (in)






    /** linear search
    int ele, i, flag=0;
    printf("Enter element you want to search - ");
    scanf("%d",&ele);

    for (int i=0 ; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            if(arr[i][j]==ele);
            {
            flag=1;
            printf("Value found at position %d %d  ", i,j);



        }
        if(flag==0)
            printf("Value not found!");
    }**/


}




int main()
{
    int matrix[3][4]; // length of array is 12
    int choice ,a , b  ;

    for (int i=0 ; i<3; i++)
    {
        for (int j=0; j<4; j++)
        {
            // assuming array is sorted out
            printf("Enter value of matrix [%d][%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    display(matrix);

    printf("Choose - 1) Insert  2) Delete 3) Search ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        insert(matrix,a,b);
        break;
    case 2:
        pop(matrix,a,b);
        break;
    case 3:
        search(matrix);
        break;
    default:
        printf("Unknown operator.\n");
        break;


    }

    return 0;
}
