#ifndef MAINUI_H
#define MAINUI_H
#include "Employee.h"
#include <iostream>
#include "EmployeeService.h"

using namespace std;

class MainUI
{
    public:
        void MainMenu();
        void userInput(char input);
        Employee salaryInput();
        void salaryYearInfo();
        int employeeHighest();

    private:
};


#endif // MAINUI_H
