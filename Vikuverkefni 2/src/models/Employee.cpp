#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee()
{

}

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
    if (out == cout) {
        out << "Name: ";
    }

    out << employee.getName() << endl;

    if (out == cout) {
        out << "SSN: ";
    }

    out << employee.getSsn() << endl;

    if (out == cout) {
        out << "Salary: ";
    }

    out << employee.getSalary() << endl;

    if (out == cout) {
        out << "Month: ";
    }

    out << employee.getMonth() << endl;

    if (out == cout) {
        out << "Year: ";
    }

    out << employee.getYear() << endl;

    return out;
}

istream& operator >> (istream& in, Employee& employee) {
    in >> employee._name;
    in >> employee._ssn;
    in >> employee._salary;
    in >> employee._month;
    in >> employee._year;
    return in;
}
