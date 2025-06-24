#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,3,3,3,4,5,6};
    int first = -1;
    int second = -1;
    int start = 0;
    int end = 7;
    
    int mid;

    int target = 3;
// Finding first occurance
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }   
        else if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
    }

    start = 0;
    end = 7;
// last occurance
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == target)
        {
            second = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target)
        {
            end = mid -1 ;
        }
        else {
            start = mid + 1;
        }
    }

    cout << first << endl;
    cout << second << endl;
}