#include<iostream>
using namespace std;
class Person
{
	private :
		int c_no;
		void printCno()
		{
			cout<<c_no<<endl;
		}
	protected :
		string address="asdasd";
		void print()
		{
			cout<<address<<endl;
		}
	public:
		string name;
		void greet()
		{
			cout<<"Good Morning";
		}
};
class Employee:public Person
{
	public:
		void display()
		{
			print();			
		}
};
int main()
{
	Person p;
	
	Employee e;
	e.display();
	
}
