#include<iostream>
using namespace std;
class Point
{
	public :
	Point()
	{		
		}	
	int x,y;
	Point(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
	void display()
	{
		cout<<x<<" : "<<y<<endl;
	}
	Point operator +(Point p1)
	{
		Point p3(x+p1.x,y+p1.y);
		return p3;		
	}
	//unary operator prefix
	Point operator++()
	{
		Point p(++x,++y);
		return p;
	}
	//unary operator postfix
	Point operator++(int)
	{
		Point p(x++,y++);
		return p;
	}
};

int main()
{
	Point p(2,3),p1(19,8);
	Point p2;
	p2=p+p1;
	p.display();
	p1.display();
	p2.display();
	
	Point p3(2,5);
	++p3;
	p3.display();
	
	Point p4(3,6);
	p4++;
	p4.display();
}
