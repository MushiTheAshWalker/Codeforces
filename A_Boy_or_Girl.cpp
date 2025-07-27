#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    if (n%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}