#include<stdio.h>
int main()
{
	int i,num;
	for(i=1;i<10;i++)
	{
		printf("\n%d",i);
		if(i==5)
		{
			goto manav;
		}
	}
	manav:
		printf("\nAt end");
		
	}
