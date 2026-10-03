#include<iostream>
using namespace std;
class student
{
private:
	char name[30];
	int rollno;
	float marks;
public:
	void inputDetails()
	{
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter Roll number:";
	cin>>rollno;
	cout<<"Enter marks:";
	cin>>marks;
	} 
	void displayDetails()
	{
	cout<<"\nStudent Details\n";
	cout<<"Name of stuent: "<<name<<endl;
	cout<<"Roll number: "<<rollno<<endl;
	cout<<"Marks: "<<marks<<endl;
	}
};
int main()
{
student studentObj;
studentObj.inputDetails();
studentObj.displayDetails();
return 0;
}
