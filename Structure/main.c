#include <stdio.h>
#include <stdlib.h>
// use . operator to access attribute of structures
//array of similar data types are possible
// array of cars *****

struct car
{
    char name[15];
    int seats;
    float price;
    int mileage;
} c1 , c2;

// program to make array of struct



int main ()
{
    struct car c[8];

    printf("Size of structure is %d\n",sizeof(car));

    for (int i=0; i<2; i++)
    {
        printf("Enter name of car %d : ",i);
        scanf("%s",&c[i].name);

        printf("Enter no. of seats of car %d : ",i);
        scanf("%d", &c[i].seats);

        printf("Enter price of car %d :  ", i);
        scanf ("%f",&c[i].price);

        printf("Enter mileage of car %d : ",i);
        scanf("%d",&c[i].mileage);

        printf("\n\n");
    }

// array of structure
    /**for (int i=0; i<2 ; i++)
    {//ok working
        printf("%s",c[i].name);
        printf("%d", c[i].seats);
        printf("%f",c[i].price);
        printf("%d",c[i].mileage);
    }**/

    return 0;
}

/**int main()
{ //taking input for struct variable
    struct car ;

    printf("For Car 1 \n");

    printf("Enter name : ");
    scanf("%s",&c1.name[15]);

    printf("Enter no. of seats: ");
    scanf("%d", &c1.seats);

    printf("Enter price:  ");
    scanf ("%f",&c1.price);

    printf("Enter mileage: ");
    scanf("%d",&c1.mileage);


    printf("For car 2 \n ");

    printf("Enter name : ");
    scanf("%s",&c2.name[15]);

    printf("Enter no. of seats: ");
    scanf("%d", &c2.seats);

    printf("Enter price:  ");
    scanf ("%f",&c2.price);

    printf("Enter mileage: ");
    scanf("%d",&c1.mileage);


}**/



/**struct K22CS {
    int roll;
    float marks;
    char grade;

};
int main()
{
    struct K22CS , S1 , S2;

    printf("Enter roll number : ");
    scanf("%d", &S1.roll);

    printf("Enter marks : ");
    scanf("%f", &S1.marks);

    printf("Enter your grade : ");
    scanf("%c",&S1.grade);

    printf("Enter roll number : ");
    scanf("%d", &S2.roll);

    printf("Enter marks : ");
    scanf("%f", &S2.marks);

    printf("Enter your grade : ");
    scanf("%c",&S2.grade);





    return 0;
}
**/
