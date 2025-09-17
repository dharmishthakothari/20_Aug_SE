#include<stdio.h>
void count_fre(int no,int numbers[])
{
	int i,count,j,no_check;
	for(i=0;i<no;i++)
	{
		count=0;
		
		//fixing no_check variable with single element from array
		no_check=numbers[i];
		for(j=0;j<no;j++)
		{
			//comparing no_check with other array elements
			if(no_check==numbers[j])
				count++;			
		}
		printf("\nnum== %d count=%d ",numbers[i],count);
	}
}
int main()
{
	int numbers[10];
	int no,i;
	printf("Enter number of elements ");
	scanf("%d",&no);
	
	//input array elements
	for(i=0;i<no;i++)
	{
		printf("Enter number ");
		scanf("%d" , &numbers[i]);
	}
	count_fre(no,numbers);
}
