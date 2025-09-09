#include<stdio.h>
int main()
{
	
	int numbers[10];
	int i,n,sum;
	printf("Enter no of element ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element ");
		scanf("%d",&numbers[i]);
	}
	printf("Array Elements ");
	for(i=0;i<n;i++)
	{
		printf("\n%d",numbers[i]);
		sum+=numbers[i];
	}
	printf("\n Sum of elements %d ",sum);
}
	
	
