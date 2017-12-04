#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H

#include "Employee.h"



class EmployeeService
{
    public:
        EmployeeService();

        void GetSalary(string ssn);
        void AddSalary( string ssn, int month, int year );
        double GetTotalSalary( string ssc, int year );
        Employee GetHigest(int year);

    private:
};

#endif // EMPLOYEESERVICE_H
