#include "EmployeeService.h"

EmployeeService::EmployeeService(){
//    repo();
}

vector<Employee> EmployeeService::GetSalary(string ssn){
    if(validateSsn(ssn)){
            vector<Employee> allEmp = repo.returnDatabase();
            vector<Employee> chosenEmp;
            for(unsigned int i = 0; i < allEmp.size(); i++){
                if(allEmp[i].getSsn() == ssn ){
                    chosenEmp.push_back( allEmp[i] );
                }
            }
            if(chosenEmp.size() == 0){
                throw InvalidSsnInput();
            }
            return chosenEmp;
    }
    return vector<Employee>();
}
void EmployeeService::AddSalary( Employee e ){

    if( validateSsn( e.getSsn() ) && validateName(e.getName()) &&
        validateSalary(e.getSalary()) && validateMonth(e.getMonth()) &&
        validateYear(e.getYear()) ){

            vector<Employee> allEmp = repo.returnDatabase();
            for( int i = 0; i < allEmp.size(); i++){
                if( e.getMonth() == allEmp[i].getMonth() &&
                    e.getYear() == allEmp[i].getYear() ){
                        allEmp[i] = e;
                        //repo.uppdateDadabase( allEmp );
                        break;
                }
            }

            repo.addToDatabase(e);
       }

}
double EmployeeService::GetTotalSalary( string ssn, int year ){
    double total = 0;
    if(validateSsn(ssn) && validateYear(year)){
        vector<Employee> allEmp = repo.returnDatabase();

        for(unsigned int i = 0; i < allEmp.size(); i++){
            if(  allEmp[i].getSsn() == ssn &&
                 allEmp[i].getYear() == year ){
                    total += allEmp[i].getSalary();
            }
        }
    }

    return total;
}
Employee EmployeeService::GetHighest(int year){
    if( validateYear( year )){
        vector<Employee> allEmp = repo.returnDatabase();
        Employee highest = allEmp[0];
        for(unsigned int i = 1; i < allEmp.size(); i++){
            if(allEmp[i].getSalary() > highest.getSalary() ){
                highest = allEmp[i];
            }
        }
        return highest;
    }
    return Employee();
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
    if( year == 2017 ){
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
        throw InvalidSalaryInput();
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
