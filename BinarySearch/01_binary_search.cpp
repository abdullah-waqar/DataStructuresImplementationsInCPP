#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size()-1;
    int mid =0;
    while(start <= end)
    {
        mid = start + (end - start) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(target < arr[mid])
        {
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return mid;

}


int binarySearchRecc(vector<int> &arr, int target , int start , int end) 
{
    
    int mid = start + (end - start) / 2;
    if(start <= end)
    {
        
        if(target > arr[mid]) return binarySearchRecc(arr, target, mid+1, end);

        else if(target < arr[mid]) return   binarySearchRecc(arr, target, start, mid-1 );

        else return mid;
    }
}
int main()
{
    //** BINARY SEARCH ALOGRITHM -> APPLY ON THE SORTED ARRAY */
    //? FIND THE MID => COMPARE WHEATHER IT IS OUR TARGET ELEMENT OR NOT

    vector<int> arr1 = {-1, 0,3,4, 5,9,12};

    cout << binarySearch(arr1, 5) << endl;
    cout << binarySearchRecc(arr1, 5, 0,6);
    

}