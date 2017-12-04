#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(   char nafn[], char ssn[],
                    double salary, int month,
                    int year    ){


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
    out << "SSN: " << employee.getSsn() << endl;
    out << "Salary: " << employee.getSalary() << endl;
    out << "Month: " << employee.getMonth() << endl;
    out << "Year: " << employee.getYear() << endl;

    return out;
}
