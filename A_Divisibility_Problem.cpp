#include<iostream>
using namespace std;
int main()
{
    long long int n;;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        long long int a,b;
        cin>>a>>b;
        int move=0;
        while(a%b!=0)
        {
            a=a+1;
            move++;
        }
         cout<<move<<endl;
    }
    return 0;
}