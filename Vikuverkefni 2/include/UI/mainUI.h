#ifndef MAINUI_H
#define MAINUI_H
#include "Employee.h"
#include <iostream>
#include "EmployeeService.h"
#include <stdlib.h>
#include "../ValidationException.h"

using namespace std;

class MainUI
{
    public:
        void MainMenu();
        void userInput(char input);
        Employee salaryInput();
        void salaryYearInfo();
        int employeeHighest();
        string inputSSN();

    private:
        EmployeeService EmployeeService;
};


#endif // MAINUI_H
