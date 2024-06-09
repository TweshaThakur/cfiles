#include <stdio.h>
#include <stdlib.h>

//binary search in 1 d array
int BinarySearch( int arr[] , int low , int high , int ele)
{
    int result, mid;
    // check for base case

    if (high >= low)
    {
        mid = (low + high) / 2;

    // if element is present at middle itself

        if (arr[mid]== ele)
        {
            return mid;
        }

    // if element is smaller than mid then it is present in left subarray

        else if (arr[mid]>ele)
        {
            return BinarySearch(arr, low , mid-1 , ele);
        }
    // if element bigger than mid then it is in right sub array
        else
            { return BinarySearch(arr , mid +1 , high , ele);}
    }
    // element not present
    else {
        return -1;
    }


}
int main()
{
    int n, ele, result;

    printf ("Enter length of array: ");
    scanf("%d",&n);

    int matrix[n];

    for (int i =0 ; i<n ; i++)
    {
        printf("Enter element at %d position - ", i);
        scanf("%d",&matrix[i]);
    }


    for (int i =0 ; i<n ; i++)
    {
        printf("%d ",matrix[i]);
    }
    printf("\n");

    printf("Enter element to be searched in our sorted array - ");
    scanf ("%d",&ele);

    result = BinarySearch(matrix,0 , n-1, ele);

    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);

    return 0;
}
