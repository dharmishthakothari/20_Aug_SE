#include<stdio.h>
#include<string.h>
int main()
{
	//char name[20]="Manav Shah";
	char name[20];
	int i,j;
	printf("Enter your name ");
	scanf("%s",name);
	//To find length of string/name
	i=strlen(name);
	printf("name have %d of length ",i);
	//reverse name character by character 
	for(j=i;j>=0;j--)
	{
		printf("%c",name[j]);
	}
	
	//to copy from name to copy_name
	char copy_name[20];
	strcpy(copy_name,name);
	printf("Copied string is %s",copy_name);
	
}
