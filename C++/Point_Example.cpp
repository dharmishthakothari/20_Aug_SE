#include<iostream>
using namespace std;
class Point
{
	public:
	int x,y;
	Point(int x1,int y1)
	{
		cout<<"In Constructor "<<endl;
		x=x1;
		y=y1;		
	}
	~Point()
	{
	}	
	void display()
	{
		cout<<x<<" : "<<y<<endl;
	}
};
int main()
{
	Point p1(2,3);
	p1.display();
	
	Point p2(4,5);
	p2.display();
	
}
