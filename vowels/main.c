#include <stdio.h>
#include <stdlib.h>

int main()
{
    char char_tocheck;

    scanf("%c",&char_tocheck);

    if (char_tocheck=='a'||char_tocheck=='e'||char_tocheck=='i'||char_tocheck=='o'||char_tocheck=='u')
    {
        printf("Yes %c is  a vowel. ",char_tocheck);
    }
    else
    {
        printf("%c is a consonant",char_tocheck);
    }
    return 0;
}
