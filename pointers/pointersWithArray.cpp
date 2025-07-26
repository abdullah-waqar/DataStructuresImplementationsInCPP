#include <iostream>
using namespace std;

int main()
{
    //** ARRAYS ARE POINTERS AND IF YOU PRINT THE ARR IT WILL GIVE YOU THE ADDRESS OF FIRST ELEMENT */
    int arr[] = {1,2,3,4,5};

    cout << "Address of first element: " << arr << endl;
    cout << "Value at arr is: " << *arr << endl;
}