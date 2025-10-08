#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual int calculateArea()
		{
			cout<<"in Shape "<<endl;
		}
};
class Rectangle : public Shape
{
	public :
			int calculateArea()
			{
				int l=100;
				int b=20;
				return l*b;
			}
};
class Square:public Shape
{
	public :
	 int calculateArea()
	 {
	 	int l=20;
	 	return l*l;
	 }
};
int main()
{
	Shape *s;
	//s.calculateArea();
	Rectangle r;
	s=&r;
	cout<<"Area of Rectagle "<<s->calculateArea()<<endl;
	
	Square s1;
	s=&s1;
	cout<<"Area of Square "<<s->calculateArea()<<endl;
	
}
