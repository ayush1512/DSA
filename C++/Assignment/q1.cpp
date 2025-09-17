#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollNo;
    float marks;
    char grade;

public:
    Student();
    ~Student();

    // Setter functions
    void setName(const string &n) { name = n; };
    void setRollno(int r) { rollNo = r; };
    void setMarks(float m) { marks = m; };
    void setGrade(char g) { grade = g; };

    // Getter functions
    string getName() const { return name; }
    int getRollno() const { return rollNo; }
    float getMarks() const { return marks; }
    char getGrade() const { return grade; }

    void aInfo();
    void dInfo();
    char calcGrade();
};

Student::Student(/* args */)
{
    cout << "Student object created." << endl;
    name = "ABC";
    rollNo = 00;
    marks = 00.00;
    grade = 'F';
}

Student::~Student()
{
    cout << "Student object destroyed." << endl;
}

void Student::aInfo()
{
    string n;
    cout << "Enter the name: ";
    cin >> n;
    setName(n);

    int r;
    cout << "Enter the roll no.: ";
    cin >> r;
    setRollno(r);

    float m;
    cout << "Enter the marks: ";
    cin >> m;
    setMarks(m);

    setGrade(calcGrade());
}

char Student::calcGrade()
{
    float m = getMarks();
    if (m >= 90 && m <= 100)
    {
        return 'A';
    }
    else if (m >= 80)
    {
        return 'B';
    }
    else if (m >= 70)
    {
        return 'C';
    }
    else if (m >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

void Student::dInfo()
{
    cout << "Student Name: " << getName() << endl;
    cout << "Student Roll No.: " << getRollno() << endl;
    cout << "Student Marks: " << getMarks() << endl;
    cout << "Student Grade: " << getGrade() << endl;
}
int main()
{
    Student s;
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