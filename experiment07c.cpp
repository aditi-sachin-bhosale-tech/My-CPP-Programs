//Hybrid inheritance
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

class StudentExam : virtual public Student
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

class Sports : virtual public Student
{
protected:
    float sportsmarks;

public:
    void getsports()
    {
        cout << "Enter Sports Marks: ";
        cin >> sportsmarks;
    }
};

class StudentResult : public StudentExam, public Sports
{
    float per;

public:
    void calculate()
    {
        per = (sub1 + sub2 + sub3 +
               sub4 + sub5 + sub6 +
               sportsmarks) / 7.0;
    }

    void display()
    {
        putdata();
        cout << "\nPercentage including Sports: "
             << per << "%";
    }
};

int main()
{
    StudentResult s;

    s.getdata();
    s.getmarks();
    s.getsports();
    s.calculate();
    s.display();

    return 0;
}
