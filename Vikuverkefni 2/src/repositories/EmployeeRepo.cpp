#include "EmployeeRepo.h"

EmployeeRepo::EmployeeRepo(){
    readFromFile();
}

void EmployeeRepo::readFromFile() {
    ifstream fin;
    fin.open("employees.txt");
    if (fin.is_open()) {
        Employee temp;
        while(fin >> temp){
            _employeeRecords.push_back(temp);
        }
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
    return _employeeRecords;
}

void EmployeeRepo::addToDatabase(Employee emp){
    _employeeRecords.push_back(emp);
    writeToFile(emp);
}

void EmployeeRepo::overwriteFile(vector<Employee> emp){
    ofstream fout;
    fout.open("employees.txt");
    if (fout.is_open()) {
        for(unsigned int i = 0; i < emp.size(); i++){
            fout << emp[i];
        }
    }
    _employeeRecords = emp;
    fout.close();
}
