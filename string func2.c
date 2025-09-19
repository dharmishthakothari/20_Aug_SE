#include<stdio.h>
#include<string.h>
int main()
{
	char name[20];
	char n;
	printf("Enter charcter ");
	scanf("%c",&n);
	printf("Enter name ");
	scanf("%s",name);
	//char n='A';
	
	char *ans;
	//char ans[20];
	ans=strchr(name,n);
	printf("%s",ans);
	
}
