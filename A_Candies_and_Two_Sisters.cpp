#include<iostream>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>d;
        cout<<((d-1)/2)<<endl;
    }
    return 0;
}