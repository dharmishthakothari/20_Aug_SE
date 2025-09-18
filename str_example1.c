#include<stdio.h>
int main()
{
	//char name[20]="Manav Shah";
	char name[20];
	int i;
	printf("Enter your name ");
	scanf("%s",name);
	
	//'\0	
	
	for(i=0;name[i]!='\0';i++)
	//for(i=0;i<=19;i++)
		printf("\n%c",name[i])	;
	printf("Your name is %s ",name);
	
}
