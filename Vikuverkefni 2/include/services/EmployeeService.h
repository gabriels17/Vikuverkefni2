#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H

#include "Employee.h"
#include "ValidationException.h"
#include "EmployeeRepo.h"
#include <string>
#include <iostream>

class EmployeeService {

    public:
        EmployeeService();

        vector<Employee> GetSalary(string ssn);
        void AddSalary( string ssn, string name,
                        double salary, int month,
                        int year );
        void AddSalary( Employee e );
        double GetTotalSalary( string ssc, int year );
        Employee GetHighest(int year);

    private:
        bool validateSsn( string ssn );
        bool validateYear( int year );
        bool validateMonth ( int month );
        bool validateSalary( double salary );
        bool validateName ( string name );

        EmployeeRepo repo;
};

#endif // EMPLOYEESERVICE_H
