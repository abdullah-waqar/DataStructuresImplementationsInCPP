#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {7,1,5,3,6,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;

    // for(int i = 0; i < size; i++)
    // {
    //     int current = 0;
    //     for(int j = i + 1; j < size; j++)
    //     {
    //         current = arr[j] - arr[i];
    //         if(current > max)
    //             max = current;
            
    //         cout << arr[j] << " - " << arr[i] << " = " << current << endl;
    //     }
    // }

    // cout << "Max profit: " << max << endl;

   int maxProfit = 0;
   int bestBuy = arr[0];
   for(int i =1; i < size; i++)
   {
        if(arr[i] - bestBuy > maxProfit)
            maxProfit = std::max(maxProfit, arr[i]);

        bestBuy = min(bestBuy , arr[i]);
   }

   cout  << "Max profit: " << maxProfit << endl;
}