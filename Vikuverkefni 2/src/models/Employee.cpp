#include "Employee.h"

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
