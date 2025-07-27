#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,p1,p2;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s.size()%2==0)
        {
            int x=s.size()/2;
            p1=s.substr(0,x);
            p2=s.substr(x);
            if (p1==p2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
 return 0;   
}