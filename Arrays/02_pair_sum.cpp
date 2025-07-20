#include <iostream>
#include <unordered_map>

using namespace std;

int main ()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int target = 9;
    // for(int i = 0; i < size; i++)
    // {
    //     for(int j = i + 1; j < size; j++)
    //     {
    //         if(arr[i] + arr[j] == target)
    //         {
    //             cout << "First: " << i << " Second: " << j << endl;
    //             break;
    //         }
    //     }
    // }

    //! Using 2 pointers --> this only works if the array is sorted
    // int i = 0 , j = size-1;
    
    // for(int element = 0; element < size; element++)
    // {
    //     int findTarget = arr[i] + arr[j];
    //     if(findTarget == target)
    //     {
    //         cout << "First: " << i << " Second: " << j << endl;
    //         break;
    //     }
    //     else if(target < findTarget)
    //     {
    //         j--;
    //     }
    //     else {
    //         i++;
    //     }
    // }

    //? For unsorted array we can use hashmap
    unordered_map<int , int> map;
    
    for(int i= 0; i < size; i++)
    {
        int complement = target - arr[i];

        // If it exist
        if(map.find(complement) != map.end())
        {
            cout << "First: " << map[complement] << " Second: " << i << endl;
        }

        map[arr[i]] = i;


    }
    

}