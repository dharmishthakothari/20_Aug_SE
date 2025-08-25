//Logical operators 

#include<stdio.h>
int main()
{
	
	int a,b;
	//acceppring 2 numbers from user
	printf("Enter 2 numbers ");
	scanf("%d%d",&a,&b);
	printf("\na>b && a>100 = %d",a>b && a>100);
	printf("\na>b || a>100 = %d",a>b || a>100);
	printf("\n !(a>b) = %d",!(a>b));
	
}
