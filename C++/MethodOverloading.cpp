#include<iostream>
using namespace std;
int add(int number1,int number2)
{
	return number1+number2;
}
int add(int number1,int number2,int number3)
{
	
	return number1+number2+number3;
}
float add(float number1,float number2)
{
	return number1+number2;
}
int main()
{
	cout<<add(12,23,45)<<endl;
	cout<<add(2,3)<<endl;
	cout<<add(342.353f,234.43f)<<endl;
}
