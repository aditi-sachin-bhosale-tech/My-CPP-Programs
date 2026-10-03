#include<iostream>
using namespace std;
class Student{
private:
	string name;
	int marks;
friend class result;
public:
	Student(string n,int m){
	name =n;
	marks =m;
	}
};
class result{
public:
 	void displayresult(Student S){
	cout<<"Student Name : "<<S.name<<endl;
	cout<<"Marks : "<<S.marks<<endl;
	}
};
int main()
{
Student S("Aditi",93);
result r;
r.displayresult(S);
return 0;
}

