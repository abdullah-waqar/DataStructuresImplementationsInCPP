#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = 7;
    int count = 0;
    int sum = 0;
    int max_sum = 0;

    // for(int start = 0; start < size; start++)
    // {
    //     for(int end = start; end < size; end++)
    //     {
    //         for(int i = start; i <= end; i++)
    //         {
    //             sum += arr[i];
    //         }
    //         cout << sum << endl;
    //         if(max_sum < sum)
    //             max_sum = sum;
    //     }
    // }

    // for(int i = 0; i < size; i++)
    // {
    //     int current = 0;
    //     for (int j = i; j < size; j++)
    //     {
    //         current += arr[j];
    //     }
    //     max_sum = max_sum < current ? current : max_sum;
    // }


    // Kadanes Algorithm
    int maxSofar = 0;
    for(int i : arr)
    {
       maxSofar += i;
       max_sum = max(maxSofar,max_sum);
       if(maxSofar  < 0)
       {
        maxSofar = 0;
       }
    }

   cout << "Max sum is: " << max_sum << endl;
}