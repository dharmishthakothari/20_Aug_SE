#include<stdio.h>
int main()
{
	
	
	int i,n,max=0,j,temp;
	printf("Enter no of element ");
	scanf("%d",&n);
	int numbers[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter element ");
		scanf("%d",&numbers[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(numbers[i]>numbers[j])
			{
				temp=numbers[i];
				numbers[i]=numbers[j];
				numbers[j]=temp;
				
			
			}
		}
	}
		for(i=0;i<n;i++)
	{
		printf("\n%d",numbers[i]);
	}
	


}
	
	
