#include<iostream>
using namespace std;

long int fact(int num)
{
 if(num >= 1)
   return num * fact(num-1);
 else
   return 1;
}     
  
int main()
{
 int num;
 cout<<"Enter Number: ";
 cin >> num;
 fact(num);
 cout<<"Factorial: "<<fact(num);
 return 0;
 }
