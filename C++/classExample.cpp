#include<iostream>
using namespace std;
class Person
{
	public:
	int age;
	string name;
	void getData()
	{
		cout<<"Enter name and age";
		cin>>name>>age;
	}
	void display()
	{
		cout<<"\n\n"<<name<<"\t"<<age;
	}
};
int main()
{
	Person p,p1;
	p.getData();
	
	p1.getData();
	p.display();
	p1.display();
}
