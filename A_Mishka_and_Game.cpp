#include<iostream>
using namespace std;
int main()
{
    int n,a,b,Chris=0,Mishka=0;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>a>>b;
        if (a<b)
        {
            Chris++;
        }
        else if (a>b)
        {
            Mishka++;
        }   
    }
    if (Mishka>Chris)
    {
        cout<<"Mishka"<<endl;
    }
    else if (Chris>Mishka)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}