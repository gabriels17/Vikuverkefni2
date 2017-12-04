#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    public:
        Employee(   char nafn[], char ssn[],
                    double salary, int month,
                    int year    );

        string getSsn();
        double getSalary();
        int getMonth();
        int getYear();

    private:
        char _name[32];
        char _ssn[10];
        double _salary;
        int _month;
        int _year;
};

#endif // EMPLOYEE_H
