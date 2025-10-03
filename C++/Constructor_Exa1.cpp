#include <iostream>
using namespace std;

class Person {
public:
    int age1;
    string name1, address1;

    Person() {
        cout << "In Person default constructor " << endl;
    }

    Person(string name, int age) {
        name1 = name;
        age1 = age;
    }

    Person(string name, int age, string address) {
        name1 = name;
        age1 = age;
        address1 = address;
    }

    void display() {
        cout << name1 << "\t" << age1 << "\t" << address1 << endl;
    }
};

class Employee : public Person {
public:
    string dept1;
    int salary1;

    Employee(string name, int age, string address, string dept, int salary)
        : Person(name, age, address)
    {
        dept1 = dept;
        salary1 = salary;
    }

    void displayEmployee() {
        display(); 
        cout << dept1 << "\t" << salary1 << endl;
    }
};

int main() {
    Employee e1("Dharmishtha", 30, "Parimal", "Training", 12345);
    e1.displayEmployee();
    return 0;
}

