#include<stdio.h>
int main()
{
	FILE *read_file;
	FILE *write_file;
	char buffer[200];
	read_file=fopen("C:\\Users\\Admin\\Downloads\\19_ST_notes.txt","r");
	write_file=fopen("19_ST_notes_copy.txt","w");
	while(fgets(buffer,100,read_file)!=NULL)
	{
	
		printf("%s",buffer);
		//fscanf(write_file,)
		fputs(buffer,write_file);
	}
	fclose(write_file);
	fclose(read_file);
	//fgetc()
}
