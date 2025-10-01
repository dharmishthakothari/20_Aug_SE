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
		void greet()
		{
			GrandParent::greet();
			cout<<"Hello from Parent"<<endl;
		}
};
int main()
{
	Parent p;
	p.greet();
	
	cout<<"From GrandParent Object"<<endl;
	GrandParent g;
	g.greet();
	
}
