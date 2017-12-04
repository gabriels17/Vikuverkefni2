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

string Employee::getName(){
    return _name;
}

string  Employee::getSsn(){
    return _ssn;
}

double Employee::getSalary(){
    return _salary;
}

int Employee::getMonth(){
    return _month;
}

int Employee::getYear(){
    return _year;
}

ostream& operator << (ostream& out, Employee& employee){
    out << "Name: " << employee.getName() << endl;
    out << "SSN: " << employee.getSsn() << endl;
    out << "Salary: " << employee.getSalary() << endl;
    out << "Month: " << employee.getMonth() << endl;
    out << "Year: " << employee.getYear() << endl;

    return out;
}
