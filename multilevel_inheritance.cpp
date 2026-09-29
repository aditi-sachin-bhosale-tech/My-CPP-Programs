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

    void putdata()
    {
        cout << "\nRoll No: " << roll;
        cout << "\nStudent Name: " << name;
    }
};

class StudentExam : public Student
{
protected:
    float sub1, sub2, sub3, sub4, sub5, sub6;

public:
    void accept()
    {
        getdata();

        cout << "Enter 6 subject marks: ";
        cin >> sub1 >> sub2 >> sub3
            >> sub4 >> sub5 >> sub6;
    }
};

class StudentResult : public StudentExam
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
        putdata();
        cout << "\nPercentage: " << per << "%";
    }
};

int main()
{
    StudentResult s;

    s.accept();
    s.calculate();
    s.display();

    return 0;
}