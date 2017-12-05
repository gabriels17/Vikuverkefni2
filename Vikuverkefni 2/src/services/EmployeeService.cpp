#include "EmployeeService.h"

EmployeeService::EmployeeService()
{
    //ctor
}

Employee* EmployeeService::GetSalary(string ssn){
    if(validateSsn(ssn)){
        cout << "get kalla� � repo";
    }
}
void EmployeeService::AddSalary( string ssn, string name,
                                 double salary, int month,
                                 int year ){
    if( validateSsn(ssn) && validateName(name) &&
        validateSalary(salary) && validateMonth(month) &&
        validateYear(year) ){
        cout << "woop woop" << endl;
       }
}
void EmployeeService::AddSalary( Employee e ){

    if( validateSsn( e.getSsn() ) && validateName(e.getName()) &&
        validateSalary(e.getSalary()) && validateMonth(e.getMonth()) &&
        validateYear(e.getYear()) ){
        cout << "woop woop" << endl;
       }

}
double EmployeeService::GetTotalSalary( string ssc, int year ){
    if(validateSsn(ssc) && validateYear(year)){
        cout << "get kalla� � totalsal";
    }
}
Employee EmployeeService::GetHigest(int year){
    if( validateYear( year )){
        cout << " get kalla� � get highist " << endl;
    }

}


bool EmployeeService::validateSsn( string ssn ){

    if(ssn.size() == 10){
        for(int i = 0; i < 10; i++){
            if( !isdigit( ssn[i] ) ){
                throw InvalidSsnInput();
            }
        }

        return true;
    }
    else{
        throw InvalidSsnInput();
    }

}
bool EmployeeService::validateYear( int year ){
    if(year < 1900 || year > 2017){
        return true;
    }
    else{
        throw InvalidYearInput();
    }

}
bool EmployeeService::validateMonth ( int month ){
    if(month <= 12 && month >= 1){
        return true;
    }
    throw InvalidMonthInput();
}
bool EmployeeService::validateSalary( double salary){
    if(salary > 0){
        return true;
    }
    else{
        throw InvalidSaleryInput();
    }
}
bool EmployeeService::validateName ( string name){
    if(name.size() < 32){
        return true;
    }
    else{
        throw InvalidNameInput();
    }
}
