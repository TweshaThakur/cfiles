#include <stdio.h>

int prac()
{
    enum company{google,facebook,xerox,yahoo,ebay,microsoft};
    enum company a=xerox;
    enum company b=google;
    enum company c=ebay;

    printf("%i\n%i\n%i",a,b,c);
    return 0;

}
