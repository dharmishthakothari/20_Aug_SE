#include<iostream>
using namespace std;
class Person
{
	public :
		string name;
		int age;
		void getData()
		{
			cout<<"Enter name "<<endl;
			cin>>name;
			cout<<"Enter age "<<endl;
			cin>>age;
		}
		void display()
		{
			cout<<name<<"\t"<<age<<endl;
		}
};
class Employee:public Person
{
	public :
		int salary;
		string dept;
		void getEmpData()
		{
			cout<<"Enter salary and department "<<endl;
			cin>>salary>>dept;
		}
		void displayemp()
		{
			cout<<salary<<"\t"<<dept;
		}
};

//Person is my super,base,parent class
//Employee is sub,derived,child class
int main()
{
	Employee e;
	e.getData();
	e.getEmpData();
	e.display();
	e.displayemp();
}
