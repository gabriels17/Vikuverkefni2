#ifndef EMPLOYEEREPO_H
#define EMPLOYEEREPO_H

#include "Employee.h"
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class EmployeeRepo
{
    public:
        EmployeeRepo();
        void readFromFile(Employee employee);
        void writeToFile(Employee employee);
        vector<Employee> returnDatabase();
        void addToDatabase(Employee emp);
        friend istream& operator >> (istream& in, Employee emp);

    private:
        vector<Employee> _employeesRecords;
};

#endif // EMPLOYEEREPO_H
