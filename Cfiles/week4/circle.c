#include <stdio.h>

int main()
{
  float pi;
  float radius;
  float area;
  float circum;
  
 pi = 3.14159265;
  printf("Enter the radius ");
  scanf(" %f", &radius);
  area= pi*radius*radius;
  circum=2*pi*radius;
  printf("pi to 8 places is %f \n", pi);
  printf("the area is %f \n", area);
  printf("the circumference is %f \n", circum);
  return 0;
}
