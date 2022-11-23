#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    int i;

    i = 10;
    p = &i;


    printf("%p\n\n", p);
    *p = 20;
    printf("%d\n\n", i);

    return 0;
}
