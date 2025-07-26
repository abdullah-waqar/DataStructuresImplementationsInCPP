#include <iostream>
#include <algorithm>
#include <limits.h>


using namespace std;
int main()
{
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxWaterContain = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            int w = j -i;
            int height = min(arr[j] , arr[i]);
            int currentWater = w * height;
            maxWaterContain = max(maxWaterContain, currentWater);
        }
    }

    cout << "Max: " << maxWaterContain << endl;
}