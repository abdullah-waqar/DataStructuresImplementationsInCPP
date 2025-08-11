#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // int arr[] = {7, 9 , 1, 2 , 3};
    // int arr[] = {8,9,10,0,1,2};
    int arr[] = {0,10,20,30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size-1;

    int mid;
    int pivot = INT_MAX;
    while(start <= end)
    {
        mid = start + (end - start) / 2;
       
        if(arr[mid] < pivot)
            pivot = arr[mid];
        
        else if( (arr[mid-1] > arr[mid+1] )&& mid != 0)
        {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }


    }

    cout << "pivot is: " << pivot << endl;
    
}