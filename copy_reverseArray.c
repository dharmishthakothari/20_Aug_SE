#include<stdio.h>
int main()
{
	int array1[]={11,3453,5656,56};
	int array2[4],i,j;
	for(i=3,j=0;i>=0;i--,j++)
	{
		array2[j]=array1[i];
		printf("\n%d --- > %d",array1[i],array2[j]);
	}
	
}
