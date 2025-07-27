#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='0')
        {
            count++;
            if (s[i]=='1')
            {
                break;
            }
            
        }
        else if (s[i]=='1')
        {
            count++;

            if (s[i]=='0')
            {
                break;
            }
            
        }
        
        
    }
    if (count>=7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
    
}