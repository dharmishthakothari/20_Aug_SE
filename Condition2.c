#include<stdio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("number is positive");
	}
	else if(num<0)
	{
		printf("Number is Negative");
	}
	else if(num==0)
	{
		printf("Zero number ");
	}
}

