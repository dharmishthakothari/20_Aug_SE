#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main()
{
	ofstream outputFile("test.txt");


	if(!outputFile)
	{
		cout<<"File not created!";
		return 0;
	}
	else
	{
		char data[400];
		string str_data;
		do
		{
			cout<<"Enter data to write in a file: "<<endl;
			cin>>str_data;
			
//			gets(data);
//			string data_string(data);
//			
		
			outputFile<<str_data;
		}while(str_data!="END");
	}
}
