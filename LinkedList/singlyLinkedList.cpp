#include <iostream>
using namespace std;

class Node{   
                
    public:
        int key;
        int data;
        Node *next;

        Node(){
            key = 0;
            data = 0;
            next = NULL;
        }

        Node(int key , int data)
        {
            this->key = key;
            this->data = data;
        }
    
};

class LinkedList{

};

int main()
{
    Node n1(2,3);
    Node n2(3,5);

    n1.next = &n2;

    cout << n1.data << endl;
    cout << n1.next->data;
}