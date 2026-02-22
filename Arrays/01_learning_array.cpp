#include <iostream>
using namespace std;

int main()
{
    int A[] = {1,2,3,4,5};

    cout << "One Way to print: " << A[2] << endl;
    cout << "Second way to print: " << 2[A] << endl;
    cout << "Third way to print: " << *(A + 2) << endl;

    //* Variabel length arrays
    // int n;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // int B[n];

    // for(int i = 0; i < 5;i++)
    // {
    //     B[i] = i;
    // }

    // for(int i = 0; i < 5; i++)
    // {
    //     cout << i << endl;
    // }

    int rows, cols;
    cout << "Enter the row: ";
    cin >> rows;

    cout << "Enter the cols: ";
    cin >> cols;

    int **matrix = new int*[rows];
    
    
    for(int i =0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    for(int i =0; i < rows; i++)
    {
        for(int j = 0 ; j < cols; j++)
        {
            cin>> matrix[i][j];
        }
        
    }

     for(int i =0; i < rows; i++)
    {
        for(int j = 0 ; j < cols; j++)
        {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    
}