//find sum of 1-10 number 
#include<iostream>

using namespace std;
int main()
{
	int sum;
	for(int i=1;i<=10;i++)
	{
		sum+=i;
	}
	cout<<sum;
	int j,sum1;
	while(j<=10)
	{
		sum1+=j;
		j++;
	}
	cout<<endl<<sum1;		
}
