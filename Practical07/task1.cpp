#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Enter 1 for current year\n 2 for current month\n 3 for current day";
cin>>a;
switch(a)
{
  case 1:
  cout<<"2021"<<endl;
  break;
  case 2:
  cout<<"october"<<endl;
  break;
  case 3:
  cout<<"Wednesday"<<endl;
  break;
  case 4:
  cout<<"Not applicable"<<endl;
  break;
  default:
  break;
}
return 0;
}
  
  
