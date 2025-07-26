#include <bits/stdc++.h>
using namespace std;

int binaryExpRec(int a , int b)
{

    if(b == 0) return 1;
    long long res = binaryExpRec(a , b/2);
    
    if(b & 1) 
        return a * res * res;
    else 
        return res * res;
}

int iterativeExp(int a, int b)
{
   int ans = 1;

   while(b > 0)
   {
     if(b % 2 == 1)
     {
        ans *= a;
        
     }

    a *= a;
    b /= 2;


   }
   return ans;
}

int main()
{
    cout << "Build in method: " << pow(2,13) << endl;
    cout << "Binary method: "<< binaryExpRec(2, 13) << endl;
    cout << "Iterative method: " << iterativeExp(2, 13) << endl;
}