#include<stdio.h>
void intersection(int row,int col,int matrix1[10][10],int matrix2[10][10])
{
	int i,j,k=0,no_check;
	for(i=0;i<row;i++)
	{
		
		for(j=0;j<col;j++)
		{
			//fixing no_check variable with one element
			no_check=matrix1[i][j];
			//printf("\n no check === %d ",no_check);
			for(k=0;k<col;k++)
			{
				//printf("mat[j][k] %d ",matrix2[j][k]);
				//checking no_check with second array all elements
				if(no_check==matrix2[j][k])
				{	
					printf("\ncommon no = %d",no_check);
				}
		}
		}
		
	}
}
int main()
{
	int row,i,j,col,matrix1[10][10],matrix2[10][10];
	printf("Enter no of rows ");
	scanf("%d",&row);
	printf("Enter no of col ");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element for matrix 1 ");
			scanf("%d",&matrix1[i][j]);
			printf("Enter element for matrix 2 ");
			scanf("%d",&matrix2[i][j]);
		}
	}
	intersection(row,col,matrix1,matrix2);
}


