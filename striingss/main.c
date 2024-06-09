#include <stdio.h>
#include <stdlib.h>

// difference between scanf+printf  and gets+puts
int main()
{
    char c[15];
    gets(c);
    printf("%s",c);
    return 0;
}
