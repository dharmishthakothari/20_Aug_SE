// Example of arithmatic operators 
#include<stdio.h>
int main()
{
	int num1,num2,ans;
	printf("Please enter 2 numbers ");
	scanf("%d%d",&num1,&num2);
	
	printf("Number1 = %d Number2 = %d",num1,num2);
	ans=num1+num2;
	printf("\nAddition = %d",ans);
	
	ans=num1-num2;
	printf("\nSubtraction = %d ",ans);
	
	ans=num1*num2;
	printf("\nMuplication = %d ",ans);
	
	ans=num1/num2;
	printf("\nDivision = %d ",ans);
	
	//Reminder 
	ans=num1%num2;
	printf("\nReminder = %d ",ans);
	
	//second way 
	
	printf("\n\n\n\n\n\nAddition = %d",num1+num2);
	printf("\nSubstraction = %d",num1-num2);
	printf("\nMupltiplication = %d",num1*num2);
	printf("\nDivision = %d",num1/num2);
	printf("\nReminder = %d",num1%num2);
	
	
	
	
	
}
	
	
