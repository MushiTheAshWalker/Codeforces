#include<iostream>
using namespace std;
int main()
{
    int lower=0,upper=0;
    string s;
    cin>>s;
    int n=s.size();
    for (int i = 0; i < n; i++)
    {
        if ( s[i]>='A' && s[i]<='Z')
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (upper>lower)
        {
            s[i]=toupper(s[i]);
        }
        else
        {
            s[i]=tolower(s[i]);
        }
        
    }
    cout<<s<<endl;
    return 0;
    
}