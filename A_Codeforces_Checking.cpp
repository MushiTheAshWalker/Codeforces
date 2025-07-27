#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char c;
    string target="codeforces";
    for (int i = 0; i < n; i++)
    {
        int count=0;
        cin>>c;
        for (int j = 0; j < target.size(); j++)
        {
            if(target[j]==c)
            {
                count++;
            }
        }
        if(count>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}