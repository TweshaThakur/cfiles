#include <stdio.h>
#include <stdlib.h>

static int gint i;
static void staticfunc()
{
    static int i;
    printf("%d",i);
    i++;
    printf("%d\n",gint);
    gint++;
}

int main()
{
    gint++;
    staticfunc();
    gint++;
    staticfunc();
    return 0;
}

