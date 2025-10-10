#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outputFile("test.txt");
	if(!outputFile)
	{
		cout<<"File Not created ";
		return 0;
	}
	string data;
	cout<<"Enter Data that you want to write in file "<<endl;
	cin>>data;
	
	outputFile<<data;	
	outputFile.close();
	
}
