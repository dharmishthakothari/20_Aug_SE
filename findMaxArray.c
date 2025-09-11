#include<stdio.h>
int main()
{
	
	int numbers[10];
	int i,n,max=0;
	printf("Enter no of element ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element ");
		scanf("%d",&numbers[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<numbers[i])
			max=numbers[i];
	}
	printf("\n\n%d ",max);


}
	
	
