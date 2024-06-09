#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=1, c=-1;
    float x=2.5,y=0.0;

    //printf("%d",3*4+5*6); //12+6*5 @ 12+30 @ 42

    //printf("%d",3*(4+5)*6); // 3*9*6 @ 27*6 @162

    //printf("%d", 3*4%5/2);  // 12%5/2 @ 2/2 @ 1

    //printf("%d",3*(4%5)/2);   // 3*4/2 @ 12/2 @ 6

    //printf("%d",3*4 %(5/2));

    //printf("%d", 3*4%5/2);

    printf("%d\n", a&&b);

    printf("%d\n",a<b && c<b);

    printf("%d\n",b+c||!a);

    printf("%d\n",x*5&&5||(b/c));

    printf("%d\n",a<=10&&x>=1&&b);

    printf("%d\n",!x||!c||b+c);



    return 0;
}
