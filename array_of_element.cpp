//add array elements 
#include<iostream>
using namespace std;
int main()
{
	int sum,no_of_element;
	cout<<"Enter number ";
	cin>>no_of_element;
		int number[no_of_element];

	
	for(int i=0;i<no_of_element;i++)
	{
		cout<<"\nEnter element ";
		cin>>number[i];
	}
	for(int i=0;i<no_of_element;i++)
	{
		
		sum+=number[i];
	}
	cout<<sum;
}
