#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//ofstream file("example.txt");
	//ifstream file("C:\\Users\\Admin\\Documents\\20_Aug_SE.txt");
	ifstream file("intro.cpp");
	string data;
	
	
//	while(file>>data)
//	{
//		cout<<data;
//	}
	while(!file.eof())
		{
		
		getline(file,data);
		cout<<data;

	
	}
}
