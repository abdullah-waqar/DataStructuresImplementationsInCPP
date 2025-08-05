#include <iostream>
#include <vector>

using namespace std;

int main()

{
    vector<int> vec = {4,5,6,7,0,1,2};
    int start = 0;
    int end = vec.size()-1;

    while(start <= end)
    {
        int mid = start + (end - start)/2;

        if(vec[mid] >= vec[0])
        {
            start = mid+1;
        }
        else {
            end = mid;
        }
    }
    cout << start << endl;
}