//sum of given n numbers

//infinite loop for(;;)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum=0LL; //Stores the sum of the integers
    unsigned int count=0; // the number of integers to be summed

    // read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum:");
    scanf("%u",&count);

    //sum integers from 1 to count
    unsigned int i;
    for(i =1; i<=count;++i)
        sum+=i;

    printf("\nTotal of the first %u numbers is %llu\n",count,sum);


    return 0;
}
