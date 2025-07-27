#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,target;
    target="codeforces";
    for (int i = 0; i < n; i++)
    {
        int count=0;
        cin>>s;
        for (int j = 0; j < s.size(); j++)
        {
            if(s[j]!=target[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}