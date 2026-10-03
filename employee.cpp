#include<iostream>
using namespace std;
class employee
{
private:
	char name[30];
	int employeeno;
	float salary;
public:
	void inputDetails()
	{
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"Enter employee number:";
	cin>>employeeno;
	cout<<"Enter salary:";
	cin>>salary;
	} 
	void displayDetails()
	{
	cout<<"\nEmployee Details\n";
	cout<<"Name of employee: "<<name<<endl;
	cout<<"employee number: "<<employeeno<<endl;
	cout<<"salary: "<<salary<<endl;
	}
};
int main()
{
int i;
employee e[4];
for(i=0;i<4;i++)
{
e[i].inputDetails();
e[i].displayDetails();
}
return 0;
}
