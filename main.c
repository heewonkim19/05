#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int num;
    char c;
    
    printf("input a text:");
    
    while((c=getchar()) !='\n')
    {
    	if(c<= '9' && c>= '0')
    	{
		   num++;
		}
  
		}    
    printf("%i\n", num);
	return 0;
}
 
