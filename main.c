#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int answer=29;
    int number;
    int cnt=0;
    
	
    do
    {
    	printf("Guess a number:\n");
    	scanf("%d", &number);
    	if (number<answer)
    	{
    		printf("low!\n");
		}    
		else if(number>answer)
		{	
			printf("high!\n");
		}
		cnt++;
	}
	while(number != answer);
	   
	printf("congratuation!, trial : %i\n", cnt);
     
	 
	

	return 0;
}
 
