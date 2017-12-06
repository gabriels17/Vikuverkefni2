#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
    public:
        Employee();
        Employee(   string name, string ssn,
                    double salary, int month,
                    int year    );

        string getName() const ;
        string getSsn() const ;
        double getSalary() const ;
        int getMonth() const ;
        int getYear() const ;

        friend ostream& operator << (ostream& out, const Employee& employee);
        friend istream& operator >> (istream& in, Employee& employee);

    private:
        string _name;
        string _ssn;
        double _salary;
        int _month;
        int _year;
};

#endif // EMPLOYEE_H
