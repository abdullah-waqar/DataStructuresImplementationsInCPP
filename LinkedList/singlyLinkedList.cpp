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
            next = NULL;
        }
    
};

class SinglyLinkedList{
public:
    Node *head;
    SinglyLinkedList()
    {
        head = NULL;
    }

    SinglyLinkedList(Node *n)
    { 
        head = n;
    }

    Node* nodeExist(int k)
    {
        Node *temp = head;
         
        while(temp != NULL)
        {
           
                if(temp->key == k)
                {
                    return temp;
                }
        
            temp = temp->next;
        }
        return NULL;
        
    }

    void appendNode(int key, int data)
    {
         // Key should be unique
        if(nodeExist(key))
        {
            cout << "Node already exist with key: " << key << endl;
            return;
        }

        Node* node = new Node(key , data);
        if(head == NULL)
        {
            head = node;
            return;
        }

        Node* temp = head;

        // inserting at the end
        temp = head;
        while(temp->next != NULL)
        {
            cout << "KEYS: " << temp->key << endl;
            temp = temp->next;
        }

        temp->next = node;
    }

    void prependNode(int key , int data)
    {
        if(nodeExist(key))
        {
            cout << "Node already exist with key: " << key << endl;
            return;
        }

        Node *node = new Node(key , data);

        if(head == NULL)
        {
            head = node;
            return;
        }

        node->next = head;
        head = node;
    }

    void insertNode(int key, int data, int pos)
    {
        if(nodeExist(key))
        {
            cout << "Node already exsit with the key: " << key << endl;
            return;
        }

        Node* node = new Node(key, data);
        int i = 0;

        Node* temp = head;

        while(i<pos && temp != NULL)
        {
            temp = temp->next;
            i++;
        }
        
        if(temp == NULL)
            {
                cout << "INDEX OUT OF BOUND" << endl;
                return;
            }
        node->next = temp->next;
        temp->next = node;

        

    }     

    Node* deleteNode(int key)
    {
        if(head == NULL)
        {
            cout << "Singly Linked List is already Empty" << endl;
            return NULL;
        }
        Node* nodeToDelete = nodeExist(key);
        if(!nodeToDelete)
        {
            cout << "Node does not exist with key: " << key << endl;
            return nodeToDelete;
        }

        Node* temp = head;

        if(nodeToDelete == head)
        {
            head = head->next;
            return nodeToDelete;
        }
        
        while(temp->next->key != key)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return nodeToDelete;
    }
    
    Node * updateNode(int key , int data)
    {
        Node* nodeToBeUpdated = nodeExist(key);
        if(!nodeToBeUpdated){
            cout << "Node does not exsit with key: "<< key << endl;
            return NULL;
        }

        nodeToBeUpdated->data = data;
        return nodeToBeUpdated;
    }

    void print()
    {
        if(head == NULL)
        {
            cout << "No nodes are in the singly linked list" << endl;
            return;
        }
        Node *temp = head;
        cout << "KEY : VALUE" << endl;
        while(temp != NULL)
        {
            cout << "  " << temp->key << " :   " << temp->data << endl;
            
            temp = temp->next;
        }
    }
};

int main()
{
    SinglyLinkedList s;
    s.appendNode(0,0);
    s.appendNode(2,2);
    s.appendNode(3, 3);
    s.insertNode(1,1,0);
    
    
    s.deleteNode(0);
    s.updateNode(2, 4);
    s.print();
}