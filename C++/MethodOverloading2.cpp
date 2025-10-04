#include<iostream>
using namespace std;
class Person
{
		public:
			string name,address;
			int c_no;
			Person(string name,int c_no,string address)
			{
				this->name=name;
				this->c_no=c_no;
				this->address=address;
			}
			void display(string name,int c_no)
			{
				cout<<name<<c_no<<endl;
			}
			void display(string name,int c_no,string address)
			{
				cout<<name<<c_no<<address<<endl;
			}
			
};
int main()
{
	string name,address;
	int c_no;
	cout<<"Enter name ,contact number and address ";
	cin>>name>>c_no>>address;
	Person p(name,c_no,address);
	p.display(name,c_no);
}

