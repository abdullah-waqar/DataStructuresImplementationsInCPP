#include <iostream>
using namespace std;

class TreeNode
{
    public:
        int value;
        TreeNode *left;
        TreeNode *right;

        TreeNode()
        {
            value = 0;
            left = NULL;
            right = NULL;   
        }

        TreeNode(int value)
        {
            this->value = value;
            left = NULL;
            right = NULL;
        }
};

class BST
{
    public:
        TreeNode *root;

        bool isEmpty()
        {
            return root == NULL ? true : false;
        }
};

int main()
{
    
}