#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        int count=0;
        int n;
        cin>>n;
        string s;
        cin>>s;
        int o=0;
        for (int j = 0; j < n; j++)
        {
            if(isupper(s[j]))
            {
                o++;
            }
        }
          if(n==5&&s[]=='T'&&o==1)
            {
                count++;
            }
        if(count!=0)
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