//Multiple inheritance
#include<iostream>
using namespace std;
class Father 
{
	public :
		void greet()
		{
			cout<<"From Father"<<endl;
		}
};
class Mother
{
	public:
		void greet1()
		{
			cout<<"From Mother"<<endl;
		}
};
class Child : public Father, public Mother
{
	
};
int main()
{
	Child c;
	c.greet();
	c.greet1();	
}	

