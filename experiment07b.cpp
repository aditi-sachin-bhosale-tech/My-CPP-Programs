//Multiple inheritance
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    string name;

public:
    void getdata()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Student Name: ";
        cin >> name;
    }
};

class Exam
{
protected:
    float sub1, sub2, sub3, sub4, sub5, sub6;

public:
    void getmarks()
    {
        cout << "Enter 6 subject marks: ";
        cin >> sub1 >> sub2 >> sub3
            >> sub4 >> sub5 >> sub6;
    }
};

class StudentResult : public Student, public Exam
{
    float per;

public:
    void calculate()
    {
        per = (sub1 + sub2 + sub3 +
               sub4 + sub5 + sub6) / 6.0;
    }

    void display()
    {
        cout << "\nRoll No: " << roll;
        cout << "\nStudent Name: " << name;
        cout << "\nPercentage: " << per << "%";
    }
};

int main()
{
    StudentResult s;

    s.getdata();
    s.getmarks();
    s.calculate();
    s.display();

    return 0;
}
