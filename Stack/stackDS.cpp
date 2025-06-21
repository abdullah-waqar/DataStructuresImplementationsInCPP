#include <iostream>
using namespace std;
// Stack -> first in last out
// Stack -> Can be implemented with array and as well as Linked list

int stack[5];
int top = -1;

void push(int x)
{
    if(top == 4)
    {
        cout << "Stack is full" << endl;
    }
    else 
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top >= 0)
    {
        cout << stack[top] << " is popped" << endl;
        stack[top] = 0;
        top--;
    }
    else 
    {
        cout << "Stack is empty" << endl;
    }
}

int peak()
{
    if(top >= 0)
         return stack[top]; 
    else 
        throw underflow_error("Stack is empty");
}

bool isEmpty()
{
    return top == -1;
}

bool isFull()
{
    return top == 4;
}

int size()
{
    return top; // size of the stack
}

int capacity()
{
    return 5; // size of array
}

void clear()
{
    top = -1; // Empties the entire stack. 
    cout << "Stack is cleared" << endl; 
}

void display()
{
    if(top == -1)
        cout << "Stack is empty" << endl;
    else
    {
        for(int i = top; i >= 0; i-- )
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
   push(1);
   push(2);
   push(3);
 
   display();
 cout << "Peak element is: " << peak() << endl;
}