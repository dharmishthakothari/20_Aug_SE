#include<stdio.h>
int main()
{
	int num,i,next=1,pre=0,sum=0;
	printf("Enter number of series ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
	
		if(i==0)
		{
			
			pre=0;
			next=1;
			printf("%d",pre);
		}else
		{
			pre=next;
			next=sum;
			sum=pre+next;
		printf("\t%d",sum);
		}
		
		
		
	}
}
