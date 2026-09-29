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
    float sub1, sub2, sub3, sub4, sub5, sub6;

public:
    void accept()
    {
        getdata();

        cout << "Enter 6 subject marks: ";
        cin >> sub1 >> sub2 >> sub3
            >> sub4 >> sub5 >> sub6;
    }

    void displaymarks()
    {
        putdata();
        cout << "\nMarks: "
             << sub1 << " " << sub2 << " "
             << sub3 << " " << sub4 << " "
             << sub5 << " " << sub6;
    }
};

class StudentResult : public Student
{
    float per;

public:
    void calculate()
    {
        float total;
        cout << "Enter total percentage: ";
        cin >> total;
        per = total;
    }

    void displayresult()
    {
        putdata();
        cout << "\nPercentage: " << per << "%";
    }
};

int main()
{
    StudentExam e;
    StudentResult r;

    cout << "--- Student Exam Details ---\n";
    e.accept();
    e.displaymarks();

    cout << "\n\n--- Student Result Details ---\n";
    r.getdata();
    r.calculate();
    r.displayresult();

    return 0;
}