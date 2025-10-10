#include<iostream>
using namespace std;

class A
{
	public:
	static int i;

	int j;
	static void displayA()
	{
		
		cout<<"I == "<<++i<<endl;
	}
	A()
	{
		
		j=0;		
	}
	void display()
	{
		cout<<"J = "<<++j<<endl;
	}
};
int A::i=0;
int main()
{
	A a;
	a.display();
	A a1;
	a1.display();
	A a2;	
	a2.display();
	cout<<"Now called static method "<<endl;
	A::displayA();
	A::displayA();
	A::displayA();
}
