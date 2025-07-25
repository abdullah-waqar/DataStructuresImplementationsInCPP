#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <limits>
using namespace std;

int main()
{
    // int arr[] = {3,2,3};
    // sort(arr, arr + sizeof(arr) / sizeof(arr[0]));

    // int freq = 1;
    // int ans;
    // for(int  i = 1; i < 3; i++)
    // {
    //     if(arr[i] == arr[i-1])
    //     {
    //         freq++;

    //     }
    //     else {
    //         freq = 1;
    //         ans = arr[i];
    //     }

    //     if(freq > 3/2)
    //     {
    //         cout << "Majority element is: " << ans << endl;
    //         break;
    //     }

    // }

    int arr[] = {4,5,3,4,4,3,4,4,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int freq = 0, ans = 0;
    for(int i = 0; i < size; i++)
    {
        if(freq == 0)
            ans = arr[i];
        
       ans == arr[i] ? freq++ : freq--;

    }

    cout << "Majority element is: " << ans << endl;
}