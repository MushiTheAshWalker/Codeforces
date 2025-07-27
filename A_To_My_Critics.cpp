#include<iostream>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>a>>b>>c;
        if (a+b>=10 || b+c>=10 || c+a>=10)
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