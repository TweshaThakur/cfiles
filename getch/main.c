//getchar() to input char - one character at a time until user presses enter key
// putchar() prints one character at a time which is read by input - pass the variable as an argument (characters only)


//getch() can be used conio.h - console input output, does not wait for user to enter key

//getche() with an echo


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char c;

    c=getch();
    putchar(c);
    printf("%c",c);
    return 0;
}
