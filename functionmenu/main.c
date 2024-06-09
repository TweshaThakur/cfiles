/**
make a menu driven program that calls function for area of square , area of circle , area of triangle.
**/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

float ar_sq(float a)
{
    return a*a;

}

float ar_circle(float r)
{
    return PI*r*r;

}

float ar_tri(float l,float b)
{
    return 0.5*l*b;
}



int main()
{
    //variable declaration
    float side,radius , height , breadth;
    int choice;

    //input values

    printf("Enter Side of square , radius of circle , height and breadth of triangle : ");
    scanf("%f %f %f %f",&side, &radius, &height, &breadth);

    printf("Enter your choice:\n1) Area of Square\n2)Area of Circle\n3)Area of Triangle : ");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        {
            printf("Area of square is %0.2f sq units\n",ar_sq(side));
            break;
        }

    case 2 :
        {
            printf("Area of circle is %0.2f sq units\n",ar_circle(radius));
            break;
        }

    case 3 :
        {
            printf("Area of striangle is %0.2f sq units\n",ar_tri(height,breadth));
            break;
        }
    }


    return 0;
}
