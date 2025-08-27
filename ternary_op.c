// to check maximum number between 2 numbers 
#include<stdio.h>
int main()
{
	int num1,num2,ans;
	printf("Enter 2 numbers ");
	scanf("%d%d",&num1,&num2);
	ans=num1>num2?num1:num2;
	printf("%d",ans);
}
