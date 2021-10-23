#include <iostream>
using namespace std;
int main()
{
int arr[] = {10, 20, 30};
cout<< *arr <<endl;
cout<< arr <<endl;
cout<< *(arr + 1) <<endl;


return 0;
}
// resolving V1
// To resolve this we are incrementing the array location before using it as a pointer
