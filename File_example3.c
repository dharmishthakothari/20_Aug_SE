#include<stdio.h>
int main()
{
	FILE *file;
	file=fopen("test.txt","w");
	char str[]="My SE Class";
	//char str[20];
	int i=ftell(file);
	printf("\n\nBefore writing cursor position %d ",i);
	
	//fseek(file,10,SEEK_SET);
	
	fprintf(file,str);
	
	i=ftell(file);
	printf("\n\nAfter writing cursor position %d ",i);
	
//	fseek(file,10,SEEK_END);
//	fprinf(file,"This is for testing");
	
	printf("\n\nData written successfully ");
}
