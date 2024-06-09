//find out biggest number using if else
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2,num3;

    scanf("%d %d %d", &num1,&num2,&num3);

    if (num1>num2 && num1>num3)
        printf("Greatest number is : %d", num1);
    else if (num2>num1 && num2 > num3)
        printf("Greatest number is : %d", num2);
    else
        printf("Greatest number is : %d", num3);
    return 0;
}
