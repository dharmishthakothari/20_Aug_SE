#include<stdio.h>
int main()
{
	int no[5],i;
	no[0]=23;
	no[1]=45;
	no[2]=56;
	no[3]=90;
	printf("%d",no[1]);
	//second method
	int no1[]={11,44,55,77};
	printf("\n%d",no1[2])	;
	
	//print all the elements 
	printf("printing all elements ");
	for(i=0;i<4;i++)
	{
		printf("\n%d",no1[i]);
	}
		
	
}
