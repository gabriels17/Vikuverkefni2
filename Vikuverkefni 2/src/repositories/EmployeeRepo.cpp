#include "EmployeeRepo.h"

EmployeeRepo::EmployeeRepo(){

    _employeesRecords.push_back( Employee("Stebbi Cool", "0103922099", 1000, 11, 2017) );
    _employeesRecords.push_back( Employee("Stebbi Cool", "0103922099", 2000, 10, 2017) );
    _employeesRecords.push_back( Employee("Stebbi Cool", "0103922099", 3000, 9, 2017) );
    _employeesRecords.push_back( Employee("Stebbi Cool", "0103922099", 4000, 8, 2017) );
    _employeesRecords.push_back( Employee("Stebbi Cool", "0103922099", 5000, 7, 2017) );
    _employeesRecords.push_back( Employee("Stebbi Cool", "0103922099", 1600, 6, 2017) );

    _employeesRecords.push_back( Employee("Tinna Cool", "0000000000", 5000, 11, 2017) );
    _employeesRecords.push_back( Employee("Tinna Cool", "0000000000", 6000, 10, 2017) );
    _employeesRecords.push_back( Employee("Tinna Cool", "0000000000", 5000, 9, 2017) );
    _employeesRecords.push_back( Employee("Tinna Cool", "0000000000", 4000, 8, 2017) );
    _employeesRecords.push_back( Employee("Tinna Cool", "0000000000", 2000, 7, 2017) );
    _employeesRecords.push_back( Employee("Tinna Cool", "0000000000", 1300, 6, 2017) );

    _employeesRecords.push_back( Employee("Gabríel Cool", "1111111111", 10000, 11, 2017) );
    _employeesRecords.push_back( Employee("Gabríel Cool", "1111111111", 2000, 10, 2017) );
    _employeesRecords.push_back( Employee("Gabríel Cool", "1111111111", 1000, 9, 2017) );
    _employeesRecords.push_back( Employee("Gabríel Cool", "1111111111", 1000, 8, 2017) );
    _employeesRecords.push_back( Employee("Gabríel Cool", "1111111111", 2000, 7, 2017) );
    _employeesRecords.push_back( Employee("Gabríel Cool", "1111111111", 1800, 6, 2017) );

}

void EmployeeRepo::readFromFile(Employee employee) {
    ifstream fin;
    fin.open("employees.txt");
    if (fin.is_open()) {
        fin >> employee;
        cout << employee << endl;
        fin.close();
    }
    else {
        cout << "Unable to read from file!" << endl;
    }
}

void EmployeeRepo::writeToFile(Employee employee) {
    ofstream fout;
    fout.open("employees.txt", ios::app);
    if (fout.is_open()) {
        fout << employee;
    }
    fout.close();
}
vector<Employee> EmployeeRepo::returnDatabase(){
    return _employeesRecords;
}
void EmployeeRepo::addToDatabase( Employee emp ){
    _employeesRecords.push_back(emp);
   writeToFile(emp);
}
