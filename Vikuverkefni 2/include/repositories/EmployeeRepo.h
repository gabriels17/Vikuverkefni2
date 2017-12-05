#ifndef EMPLOYEEREPO_H
#define EMPLOYEEREPO_H

#include "Employee.h"
#include <vector>
using namespace std;

class EmployeeRepo
{
    public:
        EmployeeRepo();
        void readFromFile();
        void writeToFile();

        vector<Employee> returnDatabase();
        void addToDatabase( Employee emp );

        void writeToFile(Employee& employee);

    private:
        vector<Employee> _employeesRecords;
};

#endif // EMPLOYEEREPO_H
