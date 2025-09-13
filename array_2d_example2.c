#include<stdio.h>
int main()
{
	//3 x 3 matrix
	int matrix1[10][10],matrix2[10][10],matrix3[10][10];
	int i,j,row,col,sum;
	printf("Enter no of rows ");
	scanf("%d",&row);
	printf("Enter no of columns ");
	scanf("%d",&col);
	if(row==col)
	{
	
		printf("\n\nELEMENTS FOR MATRIX 1\n\n");
		//input matrix from user 
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("Enter element [%d][%d] ",i,j);
				scanf("%d",&matrix1[i][j]);
			}
			printf("\n");
		}
		//for printing matrix 1
		printf("\n\nMATRIX1\n\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("\t%d",matrix1[i][j]);
			}
			printf("\n");
		}
			for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(i==j)
				{
					sum=sum+matrix1[i][j];
				}
			}
			printf("\n");
		}
		printf("ADDTION of diagonal elements are %d",sum);
	
	}else
	{
		printf("\n\n\n INVALID ROW AND COLUMN");
	}

	
	
	
	

	
	
}
