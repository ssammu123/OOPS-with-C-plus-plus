#include <iostream>
#include <string>

using namespace std;

class Student
{
	public:
		int rno;
		long int phn;
		string adrs;
		string name;
};

int main()
{
	Student obj1;
	Student obj2;
	obj1.rno=51;
	obj1.phn=1234567890;
	obj1.adrs="Dehradun Uttrakhand";
	obj1.name="Shiv";
	obj2.rno=18;
	obj2.phn=9557137203;
	obj2.adrs="jaipur Rajasthan";
	obj2.name="Johny";
	cout<<"Details of "<<obj1.name<<" are:\n";
	cout<<"Roll no. :-"<<obj1.rno<<"\n";
	cout<<"Phone no. :-"<<obj1.phn<<"\n";
	cout<<"Address :-"<<obj1.adrs<<"\n";
	cout<<"Details of "<<obj2.name<<" are:\n";
	cout<<"Roll no. :-"<<obj2.rno<<"\n";
	cout<<"Phone no. :-"<<obj2.phn<<"\n";
	cout<<"Address :-"<<obj2.adrs<<"\n";
	return 0;
}
