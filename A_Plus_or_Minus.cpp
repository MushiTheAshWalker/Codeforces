#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
        cin>>a>>b>>c;
        int s=a+b;
        if (s==c)
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
        
    }
    return 0;
}