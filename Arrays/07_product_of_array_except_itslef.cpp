#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int left[size];
    int right[size];
    int ans[size];
    // for(int i = 0; i < size; i++)
    // {
    //     int product = 1;

    //     for(int j = 0; j < size; j++)
    //     {
    //         if(i != j)
    //             product *= arr[j];
    //     }
    //     ans[i] = product;
    // }
    
    
    // for(int i = 0; i < size; i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // Using extra space to find the product of left and right array
    //! Calculating left product
    int product = 1;
    for(int i = 0; i < size; i++)
    {
        if(i == 0)
            left[0] = product;
        else {
            product *= arr[i-1];
            left[i] = product;
        }
    }

    //? Calclating right product
    product = 1;

    for(int i = size-1; i >=0; i--)
    {
        if(i == size-1)
            right[i] = product;
        else{
            product *= arr[i+1];
            right[i] = product;        
        }
    }

//*Storing inside the ans array left and right product
    for(int i =0; i < size; i++)
    {
        ans[i] = left[i] * right[i];
    }
    for(int i = 0;i < size; i++)
    {
        cout << left[i] << " ";
    }

    cout << endl;

    for(int i = 0;i < size; i++)
    {
        cout << right[i] << " ";
    }

    cout << endl;

    for(int i = 0;i < size; i++)
    {
        cout << ans[i] << " ";
    }
}