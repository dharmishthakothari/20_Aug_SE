#include<stdio.h>
struct Person
{
	char name[20];
	int age;
	int math_marks,sciece_marks,language_marks,total;
	float percentage ;
	//data file store 
};
int main()
{
	struct Person persons[10];
	int n,i;
	//Asking user how much person data want to add
	printf("Enter number of person ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter name and Age of %d Person ",i+1);
		scanf("%s%d",persons[i].name,&persons[i].age);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%d",persons[i].name,persons[i].age);
	}
	
}
