#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    public:
        Employee(   string name, string ssn,
                    double salary, int month,
                    int year    );

        string getName();
        string getSsn();
        double getSalary();
        int getMonth();
        int getYear();

        friend ostream& operator << (ostream& out, Employee& employee);

    private:
        string _name;
        string _ssn;
        double _salary;
        int _month;
        int _year;
};

#endif // EMPLOYEE_H
