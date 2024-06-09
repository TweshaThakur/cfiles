#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius,area,perimeter=0.0;
    float pi=3.14;

    printf("Enter the radius of circle:");
    scanf("%f",&radius);

    area = pi*radius*radius;
    perimeter=2*pi*radius;

    printf("Area of circle: %0.2f\nPerimeter of circle: %0.2f",area,perimeter);

    return 0;
}
