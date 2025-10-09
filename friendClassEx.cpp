#include<iostream>
using namespace std;
class B;
class A
{
	private :
		int a=10;
	protected :
		int b=20;
	public :
		int c=30;
		friend class B;
};
class B
{
	public:
	 void displayPriData(A obj)
	{
		cout<<obj.a;
	}
	void displayProData(A obj)
	{
		cout<<obj.b;
	}
};
int main()
{
	A obj1;
	B obj;
	obj.displayPriData(obj1);
	obj.displayProData(obj1);
}

