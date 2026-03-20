#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // creation
    vector<int> marks;
    
    // Creation of vector with some intital size

    vector<int> miles(10);

    // Creation of vector with some initial size and value 
    
    vector<int> distance(15, 0);

    cout << distance[0] << endl;
    
    for(int k : distance)
        cout << " " << k;
    cout << endl;

    cout << *(distance.end() - 1) << endl;
    cout << distance.back() << endl;


    // Pushing element

    cout << "Capacity: " << marks.capacity() << " Size: " << marks.size() << endl;
    marks.push_back(10);
   marks.push_back(20);

    marks.push_back(30);

    marks.push_back(40);

    cout << "Size of marks vector: " << marks.size() << endl;
    cout << "Capacity: " << marks.capacity() << " Size: " << marks.size() << endl;
    marks.pop_back();

    cout << "Size of marks vector after popping: " << marks.size() << endl;
    cout << "Capacity: " << marks.capacity() << " Size: " << marks.size() << endl;

    // Getting first and last element


    cout << "Front: " << marks.front() << endl;
    cout << "Back: " << marks.back() << endl;

    if(marks.empty())
    {
        cout << "Vector is empty" << endl;
    }
    else
    {
        cout << "Vector is not empty" << endl;
    }

    cout << "Max size that i can take: " << marks.max_size() << endl;


    // Using iterative to traverse an array

    vector<int>::iterator it = marks.begin();

    while(it != marks.end())
    {
        cout << *it << endl;
        it++;
    }

    // 2D vectors

    vector<vector <int>> vector2d(5);

    vector2d[0].push_back(10);
    vector2d[0].push_back(20);

    cout << "2d: " << vector2d[0].front() << endl;
}