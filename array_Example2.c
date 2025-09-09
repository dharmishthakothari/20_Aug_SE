#include<stdio.h>
int main()
{
	
	int roll_no[]={101,102,103,209,78};
	int i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("\n%d",roll_no[i]);
		sum=sum+roll_no[i];
	}
	printf("Sum of element %d",sum);
	
}
