#include <iostream>
#include<string>
using namespace std;
int main()
{
string a = "Hello";
cout<<&a;
a[0] = 'j';
cout<<&a;
cout<< a;
}
