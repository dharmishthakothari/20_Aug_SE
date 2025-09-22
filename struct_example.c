#include<stdio.h>
struct Person
{
	char name[20];
	int co_no;
	int age;	
};
int main()
{
	struct Person p = { "Mahesh",232455,20};
	struct Person p1={"Yogesh",325234,20};
	
	printf("Name of person %s",p1.name);
	printf("Contact no %d",p1.co_no);
	printf("Age %d ",p.age);
	
	struct Person p2;
	//p2.name="Dharmishtha";
	strcpy(p2.name,"Dharmishtha");
	p2.co_no=1212;
	p2.age=30;
	printf("%s \t %d \t %d ",p2.name,p2.co_no,p2.age);
}
