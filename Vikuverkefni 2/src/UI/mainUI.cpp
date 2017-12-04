#include "mainUI.h"


void MainUI::MainMenu()
{

    while(true)
    {
        char input;
        cout << "1 Add salary to record" << endl;
        cout << "2 Get total salary for year" << endl;
        cout << "3 Get employee with the highest salary" << endl;
        cin >> input;
        userInput(input);
    }
}

void MainUI::userInput(char input)
{
    if (input == '1')
    {
        EmployeeService.AddSalary(salaryInput);
    }
    else if (input == '2')
    {
        EmployeeService.GetTotalSalary(salaryYearInfo);
    }
    else if (input == '3')
    {
        EmployeeService.GetHigest(employeeHighest);
    }
    else
    {
        cout << "Input is invalid" << endl;
    }
}

void MainUI::salaryInput()
{
    string ssn;
    double salary = 0.00;
    int month = 0, year = 0;
    cout << "Enter social security number: " << endl;
    cin >> ssn;
    cout << "Enter salary: " << endl;
    cin >> salary;
    cout >> "Enter month: " << endl;
    cin >> month;
    cout << "Enter year: " << endl;
    cin >> year;
}

void MainUI::salaryYearInfo()
{
    string ssn;
    int year = 0;
    cout << "Enter social security number: " << endl;
    cin >> ssn;
    cout << "Enter year: " << endl;
    cin >> year;
}

void MainUI::salaryInput(employeeHighest)
{
    int year = 0;
    cout << "Enter year: " << endl;
    cin >> year;
}
