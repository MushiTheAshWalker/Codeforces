#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if(s=="yes"||"yES"||"yeS"||"yEs"||"YES"||"Yes"||"YEs"||"YeS"||"YEs")
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