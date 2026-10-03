#include<iostream>
using namespace std;
class A
{
int side;
public:
void input()
{
cout<<"Enter side: ";
cin>>side;
}
A operator +(A obj)
{
A temp;
temp.side = side + obj.side;
return temp;
}
void display()
{
cout<<"Sum of sides is: "<<side<<endl;
}
int operator >(A obj)
{
if(side > obj.side)
{
return 1;
}
else
{
return 0;
}
}
int operator ==(A obj)
{
if(side == obj.side)
{
return 1;
}
else
{
return 0;
}
}
int operator !=(A obj)
{
if(side != obj.side)
{
return 1;
}
else
{
return 0;
}
}
};
int main()
{
A obj1, obj2, obj3;
cout<<"Object 1"<<endl;
obj1.input();
cout<<"Object 2"<<endl;
obj2.input();
obj3 = obj1 + obj2;
obj3.display();
if(obj1 > obj2)
{
cout<<"Obj1 side is greater than Obj2 side"<<endl;
}
else if(obj1 == obj2)
{
cout<<"Obj1 side is equal to Obj2 side"<<endl;
}
if(obj1 != obj2)
{
cout<<"Obj1 side is not equal to Obj2 side"<<endl;
}
return 0;
}