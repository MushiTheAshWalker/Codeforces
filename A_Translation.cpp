#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    reverse(s.rbegin(),s.rend()); //algorithm function 
    if (s==s1)
    {
        cout<<"YES"<<endl;

    }
    else
    {
        cout<<"NO"<<endl;

    }
    return 0;
    
}