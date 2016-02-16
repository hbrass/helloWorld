#include <stdio.h>

    char ltou(char ch1)
{
		char ch2;
 
		if(ch1 >= 'a' && ch1 <= 'z')
	{
		ch2 = ('A' + ch1 - 'a');
            return ch2;
        }
      else
      {
            ch2 = ch1;
            return ch2;
      }
}

int main()
{
	
	char lower, upper;  
	
	
	printf("please enter a  lower case string: ");
	gets(lower);
	
	upper = ltou(lower);
	
	printf("%s\n",upper);
	return 0;
	  

}
