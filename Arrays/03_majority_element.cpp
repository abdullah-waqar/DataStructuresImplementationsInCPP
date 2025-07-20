#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {3,2,3};
    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int freq = 1;
    int ans;
    for(int  i = 1; i < 3; i++)
    {
        if(arr[i] == arr[i-1])
        {
            freq++;

        }
        else {
            freq = 1;
            ans = arr[i];
        }

        if(freq > 3/2)
        {
            cout << "Majority element is: " << ans << endl;
            break;
        }

    }
}