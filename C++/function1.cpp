#include<iostream>
using namespace std;
// return addition of 2 numbers which is given by user
//pass default values
int add(int num1=10,int num2=0)
{
			
	return num1+num2;
}
//scope - boundry ,validity 
int val=100;
void printVal()
{
	cout<<val;
	cout<<number1;
}

int main()
{
	int number1=20,number2=200;
	cout<<add(number1,number2)<<endl;
	cout<<add()<<endl;
	cout<<add(230)<<endl;
	printVal();
	cout<<val;
	
}
