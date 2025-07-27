/**
 * author: mushi ❤️ boishakhi
 * created: 18.02.2025
**/
#include <bits/stdc++.h>

using namespace std;

#define vint vector<int>
#define vch vector<char>
#define vstr vector<string>



int main()
{
    int n;
    cin >> n;
    int m = n;
    vint v;
    int crime = 0;
    int police = 0;

    while (n--)
    {
        int x;
        cin >> x;
        if(x == -1)
            crime++;
        v.push_back(x);
    }
    
    for (int i = 0; i < m; i++)
    {
        if(v[i] > 0 && v[i+1] < 0)
            police += v[i];
    }



    cout << crime - police << endl;
    
    
    return 0;
}