#include<stdio.h>
int main()
{
	int num,i,rem,count;
	printf("Enter number of series ");
	scanf("%d",&num);
	while(num!=0)
	{
	
		rem=num%10;
		count++;
		//printf("\n%d",rem);
		num=num/10;
	}
	printf("Total no of digits %d",count);
}
