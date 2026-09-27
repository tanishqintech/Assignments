#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
    float marks;

    void Accept()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll_no: ";
        cin >> roll_no;

        cout << "Enter marks: ";
        cin >> marks;   // Fixed: marks input was missing
    }

    void Result()
    {
        if (marks >= 40)
        {
            cout << "Pass";
        }
        else
        {
            cout << "Fail";
        }
    }

    void display()
    {
        cout << "\nName is: " << name;
        cout << "\nRoll_no: " << roll_no;
        cout << "\nMarks: " << marks;
        cout << "\nResult: ";

        Result();
    }
};

int main()
{
    Student s;

    s.Accept();
    s.display();

    return 0;
}