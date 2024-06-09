//call by reference  vs call by value

#include <stdio.h>
#include <stdlib.h>

// call by value
/**
int func(int a)
{
    a=a+a;
}
int main()
{
    int b=5;
    printf("%d",b);
    func(b);





    return 0;
}

**/


// call by reference

// & --> referencing symbol

// reference --> address of some other variable which a pointer variable is hholding

void func(int *a) // pointer variable
{
    *a = *a + *a;
}
int main()
{

    int b =5;
    func(&b);
    printf("%d",b);
}
