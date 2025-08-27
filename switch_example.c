#include<stdio.h>
int main()
{
	int choice,num1,num2;
	printf("\n1. Addition \n2. Substraction \n3. Multilication \n4. Division");
	printf("\n Enter your choice ");
	scanf("%d",&choice);
	printf("Enter number1 number2  ");
	scanf("%d%d",&num1,&num2);
	switch(choice)
	{
		case 1:printf("Addition = %d ",num1+num2);
				break;
		case 2:printf("Substraction = %d ",num1-num2);
				break;
		case 3:printf("Multilication = %d ",num1*num2);
				break;
		case 4:printf("Division = %d ",num1/num2);
				break;
		
	}
}
	
