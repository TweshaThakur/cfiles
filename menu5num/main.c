//make a menu driven program that prints first 5 numbers using for , while

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, n=1;

    printf("Choose a method to print first five number:\n1. for\n2. while\n3. do-while\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        for (n=1 ; n<=5; n++)
            {printf("%d ",n);}
        break;
    case 2:
        while (n<=5)
            {
                printf("%d ",n);
                n++;
            }
        break;
    case 3:
        do {
            printf("%d ",n);
            n++;
        } while (n<=5);
        break;
    default :
        printf("Invalid choice!");
        break;

    }
    return 0;
}
