#include<iostream>
using namespace std;
class Payment
{
public:
	virtual void pay()
	{
	cout<<"Payment is done by cash."<<endl;
	}
};
class CreditCardPayment: public Payment
{
public:
	void pay() 
	{
	cout<<"Payment is done by Credit Card."<<endl;
	}
};
class UPIPayment: public Payment
{
public:
	void pay() 
	{
	cout<<"Payment is done by UPI Payment."<<endl;
	}
};
int main()
{
	Payment *p;
	Payment obj1;
	CreditCardPayment obj2;
	UPIPayment obj3;
	
	p = &obj1;
	p->pay();
	
	p = &obj2;
	p->pay();
	
	p = &obj3;
	p->pay();
	
	return 0;

}
