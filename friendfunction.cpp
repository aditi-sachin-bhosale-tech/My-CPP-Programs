#include<iostream>
using namespace std;
class Box{
int length;
public:
	Box(int l){
	length=l;
	}
friend void showlength(Box b);
};
void showlength(Box b){
cout<<"Length of Box: "<<b.length<<endl;
}
int main(){
Box b(10);
showlength(b);
return 0;
}
