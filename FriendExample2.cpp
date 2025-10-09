#include<iostream>
using namespace std;
class Employee
{
	int salary;
	public:
		string name,dept;
		Employee(string name,int salary,string dept)
		{
			this->name=name;
			this->salary=salary;
			this->dept=dept;
		}
		void display()
		{
			cout<<name<<"\t"<<dept<<"\t"<<salary<<endl;
		}
		friend int getSalary(Employee e);
};
int getSalary(Employee e)
{
	return e.salary;
}

int main()
{
	Employee e1("emp1",12454,"HR");
	e1.display();
	cout<<getSalary(e1);
}
