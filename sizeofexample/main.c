#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("variables of type char occupy %u\n",sizeof(char));
    printf("variables of type short occupy %u\n",sizeof(short));
    printf("variables of type int occupy %u\n",sizeof(int));
    printf("variables of type long occupy %u\n",sizeof(long));
    printf("variables of type long long occupy %u\n",sizeof(long long));
    printf("variables of type float occupy %u\n",sizeof(float));
    printf("variables of type double occupy %u\n",sizeof(double));
    printf("variables of type long double occupy %u\n",sizeof(long double));
    return 0;
}
