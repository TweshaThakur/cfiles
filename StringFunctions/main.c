#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength (const char string[]);
void concat(char result[], const char str[], const char str1[]);
_Bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char word1[]="jason";
    const char word2[]="ok";
    const char word3[]="whatever";
    char result[50];

    printf("%d  %d  %d\n", stringlength(word1),stringLength(word2),stringLength(word3));
    concat(result , word1 ,word2);
    printf("%s\n",result);

    printf("%d\n", equalStrings("Jason", "Jason"));

    return 0;
}
int stringLength(const char string[])
{
    int count=0;

    while (string[count]!= '\0')
        ++count;

    return count;
}

void concat(char result[], const char str[] , const char str1[])
{
    int i , j ;

    for (i=0 ; str[i]!='\0'; ++i)
    {
        result[i] = str[i];
    }
    for(j=0 ; str1[j] != '\0' ; ++j)
    {
        result[i+j]=str1[j];
    }
    result[i+j] = '\0';
}


_Bool equalStrings(const char s1[], const char s2[])
{
    int i=0;
    _Bool isEqual = false;

    while (s1[i]==s2[i]&& s1[i]!= '\0' && s2[i]!= '\0')
        ++i;

    if (s1[i]=='\0' && s2[i]=='\0')
        isEqual= true;
    else
        isEqual = false ;

    return isEqual;
}
