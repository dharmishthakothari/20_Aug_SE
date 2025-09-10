#include<stdio.h>
int main()
{
	int numbers[10],n,i,even_sum=0,odd_sum=0;
	printf("Enter no of elements ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element ");
		scanf("%d",&numbers[i]);
	}
	//array display
	for(i=0;i<n;i++)
	{
		printf("\n%d",numbers[i]);
	}
	for(i=0;i<n;i++)
	{
		if(numbers[i]%2==0)
			even_sum+=numbers[i];
		else
			odd_sum+=numbers[i];
	}
	printf("\n Even no sum = %d \n Odd no sum = %d ",even_sum,odd_sum);
	
}
	

