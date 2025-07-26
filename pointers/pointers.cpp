#include <iostream>
using namespace std;



 
void changeValue(int* value)
{
    *value = 100;
}

int main()
{
    //** Basis */
    int a = 10;
    int *ptr = &a;

    cout << "The address of a is: " << ptr << endl;
    cout << "The address of a is: " << &a << endl;
    cout << "The address of ptr is: " << &ptr << endl;

    //** POINTER TO POINTER -> POINTER WHICH WILL STORE THE ADDRESS OF OTHER POINTER */ 
    int **ptr2 = &ptr;
    cout << "Pointer ptr2 is pointing to ptr which have a address: " << ptr2 << endl;

    //** DEFERENCING OPERATOR -> IT IS REPRESENTED BY '*' */

    cout << "Pointer ptr is having a value: " << *ptr << endl;
    cout << "Deferencing the address: " << *(&a) << endl;

    cout << "Deferencing ptr to ptr: " << **ptr2 << endl;

    //** NULL POINTER */
    //! WE CANNOT DEFERENCE THE NULL POINTER, IT WILL THOUGH AN ERROR

    int *pointer = NULL;
    cout << "Address stored inside the pointer is: " << pointer << endl;

    //** PASS BY REFERENCE */

    int value = 10;
    changeValue(&value);

    cout << "Value is: " << value << endl;
}