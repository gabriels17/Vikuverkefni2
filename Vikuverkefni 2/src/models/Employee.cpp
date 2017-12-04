#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(   string name, string ssn,
                    double salary, int month,
                    int year    ){
    _name = name;
    _ssn = ssn;
    _salary = salary;
    _month = month;
    _year = year;
}

string Employee::getName() const {
    return _name;
}

string  Employee::getSsn() const {
    return _ssn;
}

double Employee::getSalary() const {
    return _salary;
}

int Employee::getMonth() const {
    return _month;
}

int Employee::getYear() const {
    return _year;
}

ostream& operator << (ostream& out, const Employee& employee){
    out << "Name: " << employee.getName() << endl;
    out << "SSN: " << employee.getSsn() << endl;
    out << "Salary: " << employee.getSalary() << endl;
    out << "Month: " << employee.getMonth() << endl;
    out << "Year: " << employee.getYear() << endl;

    return out;
}
