#include<iostream>
using namespace std;
int main()
{
int m,n,f=1;
cout<<"Enter a number: ";
cin>>n;
m=n;
for (n;n>0;n--)
{
f=f*n;
}
cout<<"Factorial of "<<m<<" is "<<f<<endl;
return 0;
}

