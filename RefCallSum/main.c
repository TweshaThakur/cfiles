#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r ;

    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    r = sum(arr , n);
    printf("%d",r);
    return 0 ;
}

void sum(int arr[] , int u )
{
    int s;

    s

}


void sum(int x[],int size){
static int sum = 0;
int i;
for(i = 0;i<size;i++){
sum = sum+x[i];
}
printf("\nThe sum of all the elements is %d ",sum);
}

int main(){
int s,i,a[100],n;
printf("\nEnter the number of elements you want to enter :");
scanf("%d",&n);
printf("\nEnter the values :");
for (i = 0;i<n;i++){
scanf("%d",&a[i]);
}
sum(a,n);
return 0;
}
