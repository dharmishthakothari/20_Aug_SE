#include<stdio.h>
#include<string.h>
int main()
{
	//char name[20]="Manav Shah";
	char name[20],sur_name[20];
	int i,j;
	printf("Enter your name ");
	scanf("%s",name);
	printf("Enter your Surname ");
	scanf("%s",sur_name);
	strcat(name,sur_name);
	printf("Full Name is %s",name);
	
	
}
