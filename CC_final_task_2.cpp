
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a , b;
    cin >> a;
    cin >> b;
    while(__gcd(a,b) !=1)
    {
        a = a/__gcd(a,b);
    }
    cout << a << endl;
    
}