#include <stdio.h>;
 
char lower_to_upper(char ch1)
{
      char ch2;
 
      if(ch1 >= 'a' && ch1 <= 'z'){
            ch2 = ('A' + ch1 - 'a');
            return ch2;
      }
      else{
            ch2 = ch1;
            return ch2;
      }
}
 
int main()
{
      char lower, upper [80];
 
      printf("Please input a lowercase character: ");
      scanf("%s", &lower);
 
      upper = lower_to_upper(lower);
 
      printf("nThe uppercase equivalent is: %cn", upper);
      return 0;
}
