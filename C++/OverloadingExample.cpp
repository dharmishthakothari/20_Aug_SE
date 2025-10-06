#include<iostream>
using namespace std;
class Test
{
	public:
		void print(string name)
		{
			cout<<name<<endl;
		}
		void print(int n)
		{
			cout<<n<<endl;
		}
		void print(char c)
		{
			cout<<c<<endl;
		}
};
int main()
{
	Test t;
	t.print('C');
	t.print(23);
	t.print("tesdtras");
}
