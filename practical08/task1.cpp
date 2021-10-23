#include <iostream>
using namespace std;
int main()
{

 int *p = { 10, 20, 30};
 cout<< *p;
 p++;
 cout<<*p;
 return 0;
 }
 
// Above program will show an error because no memory is alloacted to the pointer.
// But P just act as a place to store the address.
