#include<iostream>
using namespace std;
class Person
{
	public :
		int age1;
		string name1,address1;
	Person()
	{
		cout<<"In Person from construcotr "<<endl;
	}
	Person(string name,int age)
	{
		name1=name;
		age1=age;
	}
	Person(string name,int age,string address)
	{
		name1=name;
		age1=age;
		address1=address;
	}
	void display()
	{
		cout<<name1<<"\t"<<age1<<"\t"<<address1<<endl;
	}
};

int main()
{
	Person p;
	Person p1("Dharmihstha",30);
	p1.display();
	Person p2("Manav",23,"Parimal");
	p2.display();
	
	
	
}
