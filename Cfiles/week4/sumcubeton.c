#include <stdio.h>

int main()
{
  int n;
  int sumcube;
  
 
  printf("Enter N ");
  scanf("%i", &n);
  sumcube= (n*n)*((n+1)*(n+1))/4;
  printf("the sum is %i \n", sumcube);
  return 0;
}
