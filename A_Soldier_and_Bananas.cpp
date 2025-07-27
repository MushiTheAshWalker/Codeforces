#include<iostream>
using namespace std;
int main()
{
    int k,n,w,banana=0;
    cin>>k>>n>>w;
    for (int i = 1; i <=w; i++)
    {
        banana=banana+k*i;
    }
    if (banana>n)
    { 
    cout<<(banana-n)<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
    return 0;
}