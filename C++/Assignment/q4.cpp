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
    int getEmpId() const { return this->empID; }
    string getEmpName() const { return this->empName; }
    double getEmpSalary() const { return this->empSalary; }
    double getGrossSalary() const { return this->grossSalary; }

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
    int input;
    do
    {
        cout << "\nMenu:" << endl;
        cout << "1. Accept Info: " << endl;
        cout << "2. Display Info: " << endl;
        cout << "3. Calculate Grade: " << endl;
        cout << "4. Exit" << endl;
        cout << "Enter the choice: ";
        cin >> input;
        cout << endl;

        switch (input)
        {
        case 1:
            s.aInfo();
            break;
        case 2:
            s.dInfo();
            break;
        case 3:
            cout << "Grade: " << s.calcGrade() << endl;
            break;
        case 4:
            cout << "Exiting.." << endl;
            break;

        default:
            cout << "Invalid input!" << endl;
            break;
        }
    } while (input != 4);

    
}