#include<iostream>
using namespace std;
class Number
{
	int num;
	public:
		Number()
		{
			
		}
	Number(int num1)
	{
		num=num1;
	}
	void display()
	{
		cout<<num<<endl;
	}
	Number operator+(Number other)
	{
		Number ans1;
		cout<<"in operator + "<<num<<"\t"<<other.num<<endl;
		ans1.num=num+other.num;
		return ans1;
	}
	bool operator<=(Number other)
	{
		if(num<=other.num)
			return true;
		else
			return false;
	}
};
int main()
{
	Number n(10);
	n.display();
	Number n2(5);
	n2.display();
	Number ans(0);
	ans=n+n2;
	//n.operator+(n2)
	
	ans.display();
	bool val;
	if(n<=n2)
		cout<<"n is lesser"<<endl;
	else
		cout<<"n2 is lesser"<<endl;
	
	
	
}
