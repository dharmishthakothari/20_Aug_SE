//For loop : Multiplication table
#include<stdio.h>
int main()
{
	int i,num,num2,sum;
	printf("enter your starting number");
	scanf("%d",&num);
	printf("enter your ending number");
	scanf("%d",&num2);
	for(i=num;i<=num2;i++)
	{
		printf("\t %d",i);
		sum=sum+i;
		
	}
	printf("\n sum is %d",sum);
	
}

