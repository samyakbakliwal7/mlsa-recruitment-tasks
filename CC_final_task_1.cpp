#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n , m;
    cin >> n; // number of rows
    cin >> m; // number of columns
    char arr[n][m];
    for (int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    int count1 = 0;
    for(int i = 0;i<m;i++)
    {
        if(arr[n-1][i] == 'D')
        {
            count1 ++;
        }
    }
    int count2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i][m-1] == 'R')
        {
            count2 ++;
        }
    }
    cout << count1 + count2 << endl;
    
}