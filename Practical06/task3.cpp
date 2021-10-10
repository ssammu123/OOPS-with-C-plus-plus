#include <iostream>
using namespace std;
int main()
{
string str = "Hello World";
for(string::reverse_iterator itr=str.rbegin();itr!=str.rend();++itr)
cout<<*itr;
return 0;
}

