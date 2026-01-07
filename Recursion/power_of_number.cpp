#include <iostream>
using namespace std;


int exponentFun(int base, int power)
{
    if(power == 0)
        return 1;

    return base * exponentFun(base, power-1);
}

int main()
{
    cout << "answer is: " << exponentFun(2,4);
}