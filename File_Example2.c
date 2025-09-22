#include<stdio.h>
int main()
{
	FILE *file;
	file=fopen("test.txt","a");
	//char str[]="My SE Class";
	char str[20];
	printf("Please enter string ");
	gets(str);
	fputs(str,file);
	printf("Data Written Successfully ");
}
