#include<iostream>
using namespace std;
int main()
{
    int t,n,reminder;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;
        int sum=0;
        while (n!=0)
        {
            reminder=n%10;
            sum=sum+reminder;
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}