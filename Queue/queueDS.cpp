#include <iostream>
using namespace std;

// Queue -> First in First out "or" last in last out

// insertiong -> from behind rear / tail
// deletion -> from front  front / head

// rear/tail -> points to the last element that we inserted
// front/head -> points to the first element that we delete

//? QUEUE OPERATIONS
   //? ENQUEUE, DEQUEUE, PEEK, ISFULL, ISEMPTY


//! Enqueue
    //! 1. Check if the queue is full
    //! 2. if Queue is full , then exist
    //! 3. if not, increment rear pointer by one
    //! 4. Insert the element where the rear pointer is pointing

int queue[5];
int rear = -1, front = -1;

void enqueue(int x)
{
    if(rear == -1)
        front++;

    if(rear != 4)
    {
        rear++;
        queue[rear] = x;
    }
    else {
        cout << "Queue us full" << endl;
    }
}

int main()
{
    
}