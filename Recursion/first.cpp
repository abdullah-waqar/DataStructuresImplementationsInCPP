#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    
    int ans = n * factorial(n-1);
    return ans;

}

int power(int base, int exp)
{
    if(exp == 0)
        return 1;

    return base * power(base , exp - 1);
}

int p(int n)
{
    if(n == 0)
        return 1;
    return 2 * p(n-1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // int ans = factorial(n);
    // cout << "Answer: " << ans << endl;

    int ans = p(2);
    cout << "Answer: " << ans << endl;

}