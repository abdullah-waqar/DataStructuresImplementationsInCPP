#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node *prev;

        Node()
        {
            next = NULL;
            prev = NULL;
            data = 0;
        }

        Node(int data)
        {
            this->data = data;
            next = NULL;
            prev = NULL;
        }
};

class DoublyLinkedList
{
    Node *head = NULL;
    Node *tail = NULL;
    public:
        void insert(int data)
        {
            Node *newNode = new Node(data);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
            }
            else 
            {
                newNode->prev = tail;
                tail->next = newNode;
                tail = newNode;
            }

        }

        void print()
        {
            Node *temp = head;
            while(temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->next;
            }
        }

        void reversePrint()
        {
            Node *temp = tail;
            while(temp != NULL)
            {
                cout << temp->data << endl;
                temp = temp->prev;
            }
        }
};

int main()
{
    DoublyLinkedList d;
    d.insert(10);
    d.insert(20);
    d.insert(30);
    d.reversePrint();
}