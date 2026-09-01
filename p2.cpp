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
	cout<<"\nEnter name:";
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
int i;
student studentObj[3];
for(i=0;i<3;i++)
{
studentObj[i].inputDetails();
studentObj[i].displayDetails();
}
return 0;
} 
