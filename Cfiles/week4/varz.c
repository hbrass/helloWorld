#include <stdio.h>

int main()
{
    int z;
    int y;
    printf("Input the value of y ");
    scanf(" %i", &y);
    printf("enter the value of z ");
    scanf(" %i", &z);
    printf("   %4i x %4i = %8i\n", y, z, y*z);
    printf("   %4i + %4i = %8i\n", y, z, y+z);
    printf("   %4i - %4i = %8i\n", y, z, y-z);
    printf("   %4i / %4i = %8i\n", y, z, y/z);  
    return 0;
}

