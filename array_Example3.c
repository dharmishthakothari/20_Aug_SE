#include<stdio.h>
int main()
{
	
	int roll_no[]={101,102,103,209,78};
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		
		if(roll_no[i]%2==0)
		{
			printf("\n %d  is even",roll_no[i]);
		}
		else
			printf("\n %d is odd ",roll_no[i]);
	}
	
}
