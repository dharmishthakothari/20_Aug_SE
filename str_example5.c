#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	printf("Enter name ");
	//scanf("%s",name);
	gets(name);
	//printf("You have entered %s ",name);
	char msg[50]="You have enterd ";
	strcat(msg,name);
	puts(msg);
}
