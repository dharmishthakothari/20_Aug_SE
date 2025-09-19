#include<stdio.h>
int main()
{
	FILE *file;
	//file=fopen("goto_example.c","r");
	file=fopen("F:\\SE Batches\\15_MAY_MWF_02\\6.txt","r");
	if(file!=NULL)
	{
		printf("File is opened\n\n\n");
	}
	char data[100],ch;
	
	//fgets(data,50,file);
	//read file character by character
	//ch=fgetc(file);
	do
	{			
		ch=fgetc(file)	;
		printf("%c",ch);
	}while(ch!=EOF)	;
}
