//Multilevel inheritance
#include<iostream>
using namespace std;

class GrandParent
{
	public:
		void greet()
		{
			cout<<"Hello from GrandFather"<<endl;
		}
};
class Parent : public GrandParent
{
	public :
		void greet1()
		{
			cout<<"Hello from Parent"<<endl;
		}
};
class Child:public Parent
{
	public :
		void greet2()
		{
			cout<<"Hello from Child"<<endl;
		}
};

int main()
{
	Parent p;
	p.greet();	
	p.greet1();
	
	
	Child c;
	c.greet();
	c.greet1();
	c.greet2();
}
