#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int move=0,move1=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='A')
        {
            move++;
        }
        else if(s[i]=='D')
        {
            move1++;
        }
        
    }
    if (move>move1)
    {
        cout<<"Anton"<<endl;
    }
    else if(move1>move)
    {
        cout<<"Danik"<<endl;
    }
    else if(move==move1)
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
    

}