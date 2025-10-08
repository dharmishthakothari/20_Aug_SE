#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual int calculateArea()=0;
};
class Rectangle:public Shape
{
	int calculateArea()
	{
		int l=20;
		return l*l;	
	}	
};
int main()
{
	Shape *s;
	Rectangle r;
	s=&r;
	cout<<s->calculateArea();
}

