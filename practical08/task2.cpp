#include <iostream>
using namespace std;
int main()
{
int arr[] = {10, 20, 30};
cout<< *arr;
cout<< arr;
arr++;
cout<< *arr;

return 0;
}

//This program will show an error because we cannot increment an array with (++)increment operator.
//Because array is treated as a constant pointer in the function it is declared.
