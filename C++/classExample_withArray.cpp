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
	int n;
	cout<<"Enter no of Persons ";
	cin>>n;
	Person p[n];
	for(int i=0;i<n;i++)
	{
		p[i].getData();	
	}
	for(int i=0;i<n;i++)
	{
		p[i].display();	
	}

}
