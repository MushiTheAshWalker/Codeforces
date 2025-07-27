#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int move=0;
    for(int i=0; i<n; i++)
    {
    if (s[i]>='A'&& s[i]<='Z' || s[i]>='a' && s[i]<='z')
        {
            move++;
        }
    }
    if (move>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
    
}