#include <iostream>
#include <string>
using namespace std;

struct Dept{

    string DepName;
    string PhoneNum;
};

struct Employee{

    int EmpID;
    string EmpName;
    float Salary;
    Dept dept;
};

int main(){

    Employee emp1;

    cout << "=== Enter employee details ===" << endl;
    
    cout << "Employee ID: ";
    cin >> emp1.EmpID;
    cin.ignore();

    cout << "Empolyee Name: ";
    getline(cin , emp1.EmpName);

    cout << "Employee Salary: ";
    cin >> emp1.Salary;
    cin.ignore();

    cout << "Department Name: ";
    getline(cin , emp1.dept.DepName);

    cout << "Department Phone Number: ";
    getline(cin , emp1.dept.PhoneNum);

    cout << "=== Employee Information ===" << endl;

    cout << " Name: " << emp1.EmpName << endl;
    cout << " ID: " << emp1.EmpID << endl;
    cout << "Salary: " << emp1.Salary << endl;
    cout << "Department Name: " << emp1.dept.DepName << endl;
    cout << "Department Phone Number: " << emp1.dept.PhoneNum << endl;
    

    return 0;
}
