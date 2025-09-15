#include<stdio.h>
int add(int num1,int num2)
{
	//printf("\n\n%d",num1+num2);
	return num1+num2;
}
int main()
{
	int num=10,num2=40,ans,ave;
	ans=add(num,num2);
	ave=ans/2;
	printf("Average = %d",ave);
	
	add(29,56546);
	
	
}
