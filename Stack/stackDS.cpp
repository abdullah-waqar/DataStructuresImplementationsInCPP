#include <iostream>
using namespace std;

class Stack 
{
private:
    int top;
    int arr[5];
public:
    Stack()
    {
        top = -1;
        // Making all the entries in array 0
        for(int i = 0; i < 5; i++)
            arr[i] = 0;
    }

    // isEmpty funciton -> return T if top == -1 else F

    bool isEmpty()
    {
        return top == -1;
    }

    // isFull

    bool isFull()
    {
        return top == 4;
    }

    // push operation

    void push(int val)
    {
        if(isFull())
            cout << "Stack overflow" << endl;
        else
        {
            top++;
            arr[top] = val;
        }
    }

    // Pop method

    int pop()
    {
        if(isEmpty())
        {
            cout << "Stack is underflow" << endl;
            return 0;
        }
        else 
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

    // Count -> return how many values are in the stack

    int count()
    {
        return (top+1);
    }

    // Peak

    int peek(int pos)
    {
        if(isEmpty())
        {
            cout << "Stack is underflow" << endl;
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }

    // Change
    void change(int pos, int val)
    {
        arr[pos] = val;
        cout << "Value changed at position: " << pos << endl;
    }

    // Display

    void display()
    {
        cout << "Values in the stack are: " << endl;
        for (int i = 4; i >= 0; i--)
            cout << arr[i] << endl;
    }


};

int main()
{
   Stack s1;

   int option, position ,  value;

   do 
   {

    cout << "What operation do you want to perform? Select option number. Enter 0 to exit" << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl;

    cin >> option;

    switch (option)
    {
    case 0:
        break;
    case 1:
        cout << "Enter an item to push in the stack: ";
        cin >> value;
        s1.push(value);
        break;
    case 2:
        cout << "Pop function called - Popped value: " << s1.pop() << endl;
        break;
    case 3:
        if(s1.isEmpty())
            cout << "Stack is Empty" << endl;
        else{
            cout << "Stack is not Empty" << endl;
        }
        break;
    case 4:
        if(s1.isFull())
            cout << "Stack is Full" << endl;
        else{
            cout << "Stack is not Full" << endl;
        }
        break;
    case 5:
        cout << "Enter the position of item you want to peek: ";
        cin >> position;
        cout << "Peek function called - Value at position - " << position << " is" <<  endl << s1.peek(position) << endl;
        break;
    case 6:
        cout << "Count Function called - Number of items in the stack are: " << s1.count() << endl;
        break;
    case 7:
        cout << "Change Function called" << endl;
        cout << "Enter the position of item you want to change: ";
        cin >> position;
        cout << "Enter the value of item you want to change: ";
        cin >> value;
        s1.change(position , value);
        break;
    case 8:
        cout << "Display function called" << endl;
        s1.display();
        break;
    case 9:
        system("cls");
        break;

    
    default:
        cout << "Enter proper Option number" << endl;
        break;
    }
    


   }while(option != 0);
}