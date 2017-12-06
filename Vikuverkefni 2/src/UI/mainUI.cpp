#include "mainUI.h"


void MainUI::MainMenu()
{

    while(true)
    {
        char input;
        cout << "1 Add salary to record" << endl;
        cout << "2 Get all salary records for employee on given year" << endl;
        cout << "3 Get total salary for year" << endl;
        cout << "4 Get employee with the highest salary" << endl;
        cout << "5 Exit the program" << endl << endl;
        cin >> input;
        userInput(input);
    }
}

void MainUI::userInput(char input)
{
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
            system("CLS");
            cout << "Invalid month input" << endl;
        }
        catch (InvalidYearInput)
        {
            system("CLS");
            cout << "Invalid year input" << endl;
        }
    }
    else if (input == '2')
    {
        try
        {
            vector<Employee> emp = EmployeeService.GetSalary(inputSSN());
            for( unsigned int i = 0; i < emp.size(); i++){
                cout << emp[i];
            }
        }
        catch (InvalidSsnInput)
        {
            system("CLS");
            cout << "Invalid SSN input" << endl;
        }
    }
    else if (input == '3')
    {
        try
        {
            salaryYearInfo();
        }
        catch (InvalidSsnInput)
        {
            system("CLS");
            cout << "Invalid SSN input" << endl;
        }
         catch (InvalidYearInput)
        {
            system("CLS");
            cout << "Invalid year input" << endl;
        }
    }
    else if (input == '4')
    {
        try
        {
            Employee e = EmployeeService.GetHighest(employeeHighest());
            cout << e;
        }
         catch (InvalidYearInput)
        {
            system("CLS");
            cout << "Invalid year input" << endl;
        }
    }
    else if (input == '5')
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
    string ssn, name;
    double salary = 0.00;
    int month = 0, year = 0;
    cout << "Enter Name: " << endl;
    cin.ignore();
    getline(cin, name,'\n');
    cout << "Enter social security number: " << endl;
    cin >> ssn;
    cout << "Enter salary: " << endl;
    cin >> salary;
    if(cin.fail()){
        cin.clear();
        cin.ignore();
        salary = -1;
    }
    cout << "Enter month: " << endl;
    cin >> month;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            month = -1;
    }
    cout << "Enter year: " << endl;
    cin >> year;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            year = -1;
    }

    return Employee( name,ssn,salary,month,year );
}

void MainUI::salaryYearInfo()
{
    string ssn;
    int year = 0;
    cout << "Enter social security number: " << endl;
    cin >> ssn;
    if(cin.fail()){
        cin.clear();
        cin.ignore();
    }
    cout << "Enter year: " << endl;
    cin >> year;
    if(cin.fail()){
        cin.clear();
        cin.ignore();
    }

    cout << "The total salary for " << ssn << " in the year " << year << " is " <<EmployeeService.GetTotalSalary(ssn, year) << endl;
}

int MainUI::employeeHighest()
{
    int year = 0;
    cout << "Enter year: " << endl;
    if(cin.fail()){
        cin.clear();
        cin.ignore();
    }
    cin >> year;
    return year;
}

string MainUI::inputSSN()
{
    string ssn;
    cout << "Enter social security number: " << endl;
    cin >> ssn;
    return ssn;
}
