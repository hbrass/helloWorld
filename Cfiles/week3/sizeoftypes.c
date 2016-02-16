#include <stdio.h>

int main()
{
    int x1 = 44;
    short i1 = 5;
    char c1 = 'a';
    int x2;
    char c2;
    long x3 = 12345;
    
    
    
    printf ("name       value     location     size\n");
    printf ("x1         %i        %p           %i  \n", x1, &x1, sizeof(x1));
    printf ("i1         %i        %p           %i  \n", i1, &i1, sizeof(i1));
    printf ("c1         %c        %p           %i  \n", c1, &c1, sizeof(c1));
    printf ("x2         %i        %p           %i  \n", x2, &x2, sizeof(x2));
    printf ("c2         %c        %p           %i  \n", c2, &c2, sizeof(c2));
    printf ("x3         %i        %p           %i  \n", x3, &x3, sizeof(x3));
    
    return 0;
}
