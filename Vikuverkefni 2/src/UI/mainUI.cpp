#include "mainUI.h"


void MainUI::MainMenu()
{

    while(true)
    {
        char input;
        cout << "1 Add salary to record" << endl;
        cout << "2 Get total salary for year" << endl;
        cout << "3 Get employee with the highest salary" << endl;
        cout << "4 Exit the program" << endl << endl;
        cin >> input;
        userInput(input);
    }
}

void MainUI::userInput(char input)
{
    EmployeeService EmployeeService;
    if (input == '1')
    {
        try
        {
            EmployeeService.AddSalary(salaryInput());
        }
        catch (InvalidSsnInput)
        {
            system("CLS");
            cout << "Invalid SSN input" << endl;
        }
        catch (InvalidSalaryInput)
        {
            system("CLS");
            cout << "Invalid salary input" << endl;
        }
        catch (InvalidMonthInput)
        {
            stem("CLS");
            cout << "Invalid month input" << endl;
        }
        catch (InvalidYearInput)
        {
            stem("CLS");
            cout << "Invalid year input" << endl;
        }
    }
    else if (input == '2')
    {
        salaryYearInfo();
    }
    else if (input == '3')
    {
        EmployeeService.GetHigest(employeeHighest());
    }
    else if (input == '4')
    {
        exit(1);
    }
    else
    {
        cout << "Input is invalid" << endl;
    }
}

Employee MainUI::salaryInput()
{
    string ssn;
    double salary = 0.00;
    int month = 0, year = 0;
    cout << "Enter social security number: " << endl;
    cin >> ssn;
    cout << "Enter salary: " << endl;
    cin >> salary;
    cout << "Enter month: " << endl;
    cin >> month;
    cout << "Enter year: " << endl;
    cin >> year;

    return Employee("NAFN",ssn,salary,month,year);
}

void MainUI::salaryYearInfo()
{
    EmployeeService EmployeeService;
    string ssn;
    int year = 0;
    cout << "Enter social security number: " << endl;
    cin >> ssn;
    cout << "Enter year: " << endl;
    cin >> year;

    EmployeeService.GetTotalSalary(ssn, year);
}

int MainUI::employeeHighest()
{
    int year = 0;
    cout << "Enter year: " << endl;
    cin >> year;
    return year;
}
