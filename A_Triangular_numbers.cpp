#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t,s;
    t = n * (n + 1) / 2;
    if (t%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}