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
        void readFromFile();
        void writeToFile(Employee employee);
        void overwriteFile(vector<Employee> emp);
        vector<Employee> returnDatabase();
        void addToDatabase(Employee emp);
        friend istream& operator >> (istream& in, Employee emp);

    private:
        vector<Employee> _employeeRecords;
};

#endif // EMPLOYEEREPO_H
