#include <iostream>
using namespace std;
class Employee
{
    int empID;
    string empName;
    double empSalary;
    double grossSalary;

public:
    // Getter
    int getEmpId() { return this->empID; }
    string getEmpName() { return this->empName; }
    double getEmpSalary() { return this->empSalary; }
    double getGrossSalary() { return this->grossSalary; }

    // Setter
    void setEmpId(int id) { this->empID = id; }
    void setEmpName(string name) { this->empName = name; }
    void setEmpSalary(double salary) { this->empSalary = salary; }
    void setGrossSalary(double grossSalary) { this->grossSalary = grossSalary; }

    void addEmployee();
    void calculateGrossSalary();
    void displayEmployeeDetails();
    void updateData();
};

void Employee::addEmployee(){
    int id;
    string name;
    double salary;
    cout << "Enter the ID: ";
    cin >> id;
    setEmpId(id);
    cout << "Enter the name: ";
    cin >> name;
    setEmpName(name);
    cout << "Enter the salary: ";
    cin >> salary;
    setEmpSalary(salary);
}
void Employee::calculateGrossSalary()
{
    double salary;
    if (getEmpSalary() <= 5000)
    {
        salary = getEmpSalary() + getEmpSalary() * 0.1;
        setGrossSalary(salary);
    }
    else if (getEmpSalary() > 5000 && getEmpSalary() <= 10000)
    {
        salary = getEmpSalary() + getEmpSalary() * 0.15;
        setGrossSalary(salary);
    }
    else if (getEmpSalary() > 10000)
    {
        salary = getEmpSalary() + getEmpSalary() * 0.2;
        setGrossSalary(salary);
    }
    cout << "The Salary of the employee is: " << getEmpSalary();
}
void Employee::displayEmployeeDetails()
{
    cout << "Employee ID: " << getEmpId() << endl;
    cout << "Employee Name: " << getEmpName() << endl;
    cout << "Employee Salary: " << getEmpSalary() << endl;
    cout << "Employee Gross salary: " << getGrossSalary() << endl;
}
void Employee::updateData()
{
    string name;
    int salary;
    cout << "Enter the name: ";
    cin >> name;
    setEmpName(name);
    cout << "Enter the salary: ";
    cin >> salary;
    setEmpSalary(salary);
}
int main(){

    Employee e[5];

    e.addEmployee();
    e.displayEmployeeDetails();
    e.updateData();
    e.calculateGrossSalary();
    e.displayEmployeeDetails();
    return 0;
}