#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2;
    int b=4;
    float c=0.0;
    double d=0.0;
    int num1=5;
    float num2=3.4,sum=0.0;
    int i=5;


    //printf("%i",a+=b);
    //printf("%i",a-=b);
    //printf("%i",a*=b);
    //printf("%i",a/=b);
    //printf("%i",a%=b);
    //printf("%i",a=a>>b);
    //printf("%i",a=a<<b);
    //printf("%i",a=a&b);
    //printf("%i",a=a|b);
    //printf("%i",a=a^b);
    //printf("%d",a&b);
    //printf("%d",a|b);
    //printf("%d",a^b);
    //printf("%d",b<<1);
    //printf("%d",b>>1);


    // format specifier for sizeof() is %ld because the size of some entities may be a very large number

    //printf("%d\n",sizeof(a));
    //printf("%d\n",sizeof(b));
    //printf("%d\n",sizeof(c));
    //printf("%d",sizeof(d));

    //type cast operator

    //sum=(float)num1+num2;
    //printf("%f",sum);

    //printf("%d",++i);
    //printf("%d",i++);

    // here precedence of ++ operator is higher so it became 5 + 6 = 11

    printf("%d",i+i++);





    return 0;
}
