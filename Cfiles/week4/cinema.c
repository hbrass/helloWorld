#include <stdio.h>

int main()
{
   int child;
   int adult;
   int sum;
  
   printf("enter how many children there are ");
   scanf("%i", &child);
   child= child*10;
   
   printf("enter how many adults there are ");
   scanf("%i", &adult);
   adult= adult*20;
   
   sum= adult+child;
   
   printf("you will be paying $%i for the children and $%i for the adults, which comes to $%i in total\n", child, adult, sum);
   
   
   
    return 0;
}
