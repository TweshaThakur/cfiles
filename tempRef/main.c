#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, f;
    printf("Enter temp in celsius : ");
    scanf("%lf",&c);
    f=temp(c);

    printf("temp in fahrenheit is %lf ",f);
    return 0;
}

float temp(float c)
{
    float f;
    f=(c*1.8) + 32.00;
    return f;

}
