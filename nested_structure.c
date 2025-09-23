#include<stdio.h>
#include<string.h>
struct Person
{
	char name[20];
	int age;
};
struct Employee
{
	struct Person p;
	int salary;
	char department[20];
};
int main()
{
	struct Employee emp1;
	emp1.p.age=45;
	strcpy(emp1.p.name,"Mahesh");
	strcpy(emp1.department,"Software");
	emp1.salary=12345;
	printf("%s\t %d \t %s \t %d",emp1.p.name,emp1.p.age,emp1.department,emp1.salary);
}

