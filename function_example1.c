#include<stdio.h>

//implementation
void greet()
{
	printf("\nHello World!!!");
}
void greet1(char name[10])
{
	printf("\n\nGood Monrning %s",name);
}

int main()
{
	//function calling
	greet();
//	greet();
//	greet();
	greet1("Rushi");
	greet1("Mahesh");
	
	char student[10];
	printf("\n\nEnter name ");
	scanf("%s",&student);
	
	greet1(student);
	
}
