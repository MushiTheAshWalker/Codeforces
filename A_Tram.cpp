#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    int current=0,capacity=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        current=current-a;
        current=current+b;
        if (current>capacity)
        {
            capacity=current;
        }
        

    }
    cout<<capacity<<endl;
    return 0;
}