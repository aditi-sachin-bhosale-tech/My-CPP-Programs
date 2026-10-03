#include<iostream>
using namespace std;
class Calculate{
public:
	int num;
	Calculate(int a)
{
	num=a;
	cout<<"before calculation: "<<a<<endl;	
}
void operator++()
{
	++num;
	
}
};
int main()
{
	Calculate c(93);
	++c;
	cout<<"after calculation: "<<c.num<<endl;
	return 0;
}
