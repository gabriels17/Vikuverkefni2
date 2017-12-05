#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H

#include "Employee.h"
#include <string>
#include <iostream>

class EmployeeService {

    public:
        EmployeeService();

        Employee* GetSalary(string ssn);
        void AddSalary( string ssn, string name,
                        double salary, int month,
                        int year );
        void AddSalary( Employee e );
        double GetTotalSalary( string ssc, int year );
        Employee GetHigest(int year);

    private:
        bool validateSsn( string ssn );
        bool validateYear( int year );
        bool validateMonth ( int month );
        bool validateSalary( double salary );
        bool validateName ( string name);
};

#endif // EMPLOYEESERVICE_H
