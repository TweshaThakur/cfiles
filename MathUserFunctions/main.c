#include <stdio.h>
#include <stdlib.h>

int gcd(int u , int v);
float absoluteValue(float x);
float squareRoot(float x);


int main()
{
    int result = 0;

    result = gcd(150,35);
    printf("The gcd of 150 and 35 is %d \n.",result);

    result = gcd(1026,405);
    printf("The gcd of 1026 and 405 is %d \n.",result);

    result = gcd(15,35);
    printf("The gcd of 150 and 35 is %d \n.",result);
    return 0;
}

int gcd(int u , int v)
{
    //local variable
    int temp;

    while (v!=0)
    {
        temp = u % v;
        u=v;
        v=temp;

    }
    return u;
}

float absoluteValue(float x)
{
    if (x<0)
        x=-x;
    retun x;
}

float squareRoot(float x)
{
    const float epsilon = .00001;
    float guess = 1.0;
    float returnValue=1.0;

    if (x<0)
    {
        prinf("Negative argument to squareRoot.\n")
        return Value = -1.0;
    }

    else
    {
        while (absoluteValue(guess*guess-x)>=epsilon)
            guess=(x/guess+guess)/2.0;
        return Value;
    }
}
