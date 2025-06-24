#include <iostream>
using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];
    public:
    Queue()
    {
        front = rear = -1;
        for(int i = 0; i < 5; i++)
        {
            arr[i] = 0;    
        }
    }

    // isEmpty function
    bool isEmpty()
    {
        if(rear == -1 && front == -1)
            return true;
        else
            return false;
    }

    // isFull Function

    bool isFull()
    {
        if(rear == 4)
            return true;
        else
            return false;
    }

    void enqueue(int val)
    {
        if(isFull())
        {
            cout << 'Queue us full' << endl;
            return;
        }
        else if(rear == -1 && front == -1)
            rear = front = 0;
        else
            rear++;

        arr[rear] = val;
    }

    int dequeue()
    {
        int x = 0;
        if(isEmpty())
        {
            cout << "Queue is Empty" << endl;
            return 0;
        }
        else if(rear == front)
        {
            x = arr[front];
            arr[front] = 0;
            front = rear = -1;

        }
        else {
            x = arr[front];
            arr[front] = 0;
            front++;
        }

        return x;
    }

    int count()
    {
        return (rear - front) +1 ;
    }

    void display()
    {
        for(int i = 0; i < 5; i++)
        {
            cout << arr[i] << endl;
        }
    }

};

int main()
{
    Queue q1;
    int option , value;
    do
    {  
        cout << "Enter what operation you want to perform? Select option number. Enter 0 to exit" << endl;
        
        cout << "1. Enqueue()" << endl;

        cout << "2. Dequeue()" << endl;

        cout << "3. isEmpty()" << endl;

        cout << "4. isFull()" << endl;

        cout << "5. count()" << endl;

        cout << "6. display()" << endl;

        cout << "7. Clear Screen" << endl;

        cin >> option;

        switch (option)
        {
        case 0:
            break;
        case 1:
           cout << "Enqueue Operation called - Enter a value: ";
           cin >> value;
           q1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue operation called " << q1.dequeue() << endl;
            break;
        case 3:
            if(q1.isEmpty())
                cout << "Queue is Empty" << endl;
            else
                cout << "Queue is not Empty" << endl;
            break;
        case 4:
            if(q1.isFull())
                cout << "Queue is Full" << endl;
            else 
                cout << "Queue is not Full" << endl;
            break;
        case 5:
            cout << "Items in queue are: " << q1.count() << endl;
            break;
        case 6:
            cout << "Display function called, values in queue are " << endl;
            q1.display();
            break;
        case 7:
            system("cls");
            break;
        
        default:
            cout << "Enter valid option" << endl;
            break;
        }
        
    } while (option != 0);
    
}