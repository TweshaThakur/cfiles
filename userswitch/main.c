#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value1,value2;
    char operator;

    printf("Type in your expression:\n");
    scanf("%f %c %f",&value1,&operator,&value2);

    switch (operator)
    {
    case '+':
        printf("%.2f\n",value1+value2);
    case '-':
        printf("%.2f\n",value1-value2);
        break;
    case '*':
        printf("%.2f\n",value1*value2);
        break;
    case '/':
        if(value2==0)
            printf("Division by zero!!!");
        else
            printf("%.2f\n",value1/value2);
        break;
    default:
        printf("Unknown operator.\n");
        break;

    }
    return 0;
}
