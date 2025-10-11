//file1 data copy file2

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream readFile("intro.cpp"); //source file
	ofstream writeFile("intro1.cpp",ios::app); //destination file
	// readFile>>data
	//getline(file,data)
	string data;
	while(!readFile.eof())
	{
		readFile>>data;
		cout<<data;
		writeFile<<data;
	}
	cout<<"Data Copied successfully";
}
