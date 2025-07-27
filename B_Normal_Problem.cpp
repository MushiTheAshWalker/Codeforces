#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        string s1="";
        cin>>s;
        int k=s.size();
        for (int j = k-1; j>=0 ; j--)
        {
            if(s[j]=='q')
            {
                s1=s1+'p';
            }if(s[j]=='p')
            {
                s1=s1+'q';
            }
            if(s[j]=='w')
            {
                s1=s1+'w';
            }
        }
        cout<<s1<<endl;
    }
    return 0;
}