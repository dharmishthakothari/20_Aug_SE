#include<iostream>
using namespace std;
class Person
{
	private:
		int c_no=2345;
	public :
		string name="test";
	friend void printCNo(Person p);
};
 void printCNo(Person p)
	{
		cout<<p.c_no;
	}
int main()
{
	Person p;
	cout<<p.name<<endl;
	printCNo(p);
		
}
