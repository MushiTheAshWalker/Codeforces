#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s=to_string(n);
    int k=s.size();
    for (int i = 0; i < k; i++)
    {
        if (s[i]=='4' || s[i]=='7')
        {
            count++;
        }
        
    }
    if (count==k)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}