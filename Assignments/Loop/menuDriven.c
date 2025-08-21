#include<stdio.h>
int main()
{
	int choice,number1,number2,answer;
	printf("Enter number 1 ");
	scanf("%d",&number1);
	printf("Enter number 2 ");
	scanf("%d",&number2);
	do{
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	printf("Please enter your choice ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:answer=number1+number2;
				break;
		case 2:answer=number1-number2;
				break;
		case 3:answer=number1*number2;
				break;
		case 4:answer=number1/number2;
				break;
		default:answer=0;
				printf("Invalid choice");
	}
	printf("Answer = %d ",answer);
	}while(choice!=5);
	
}
