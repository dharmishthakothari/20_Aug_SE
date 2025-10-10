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
	outputFile<<"SQL Class "<<endl;
	outputFile<<"Today is Friday "<<endl;
	outputFile<<"Diwali is on the way"<<endl;
	outputFile<<"Good Bye "<<endl;
	
	outputFile.close();
	
}
