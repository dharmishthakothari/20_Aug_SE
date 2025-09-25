#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *num,i;
		
	int no_of_elements=5;
	num=(int*)malloc(no_of_elements*sizeof(int));
	if(num==NULL)
	{
		printf("Not allocate a memory ");
	}
	for(i=0;i<no_of_elements;i++)
	{
		num[i]=12+i;
		printf("\n%d",num[i]);
	}
}
