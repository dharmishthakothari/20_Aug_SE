#include<stdio.h>
int main()
{
	int choice,number1,number2;
	while(1)
	{
		printf("\n1. Addition \n2. Substraction \n3. Multilication \n4. Division \n5. Exit \nEnter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter 2 numbers ");
					scanf("%d%d",&number1,&number2);
					printf("Addition is = %d",number1+number2);
					break;
			case 5:printf("Bye ");
					break;
		}
	}
}
