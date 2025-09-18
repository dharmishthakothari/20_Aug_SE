#include<stdio.h>
#include<string.h>
int main()
{
	//char name[20]="Manav Shah";
	char name[20],name1[20];
	int i,j;
	printf("Enter string ");
	scanf("%s",name);
	printf("Enter another string");
	scanf("%s",name1);
	i=strcmp(name,name1);
	if(i==0)
	{
		printf("Both string are equal");
	}
	else
		printf("Both string are diffrent");
	printf("%d ",i);
}
