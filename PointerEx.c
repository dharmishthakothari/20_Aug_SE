#include<stdio.h>
int main()
{
	int num=120;
	int *ptr_num;
	printf("\n\nvalue=%d address= %p",num,&num);
	ptr_num=&num;
	printf("\naddress = %p",ptr_num);
	*ptr_num=200;
	printf("\n\nvalue=%d address= %p",num,&num);
	num=300;
	printf("\n\nvalue=%d address= %p",num,&num);
	
}
