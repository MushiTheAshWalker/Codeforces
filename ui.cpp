#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='o'&&s1[i]=='o')
        {
            count++;
            break;
        }
        
    }
    if(count>0)
    {
        cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    return 0;
}