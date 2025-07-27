#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int move=0,move1=0;
    for (int i = 0; i <s.size(); i++)
    {
        if (s[i]=='A')
        {
            move++;
        }
        else
        {
            move1++;
        }
        
    }
    if (move>move1)
    {
        cout<<"A"<<endl;
    }
    else
    {
        cout<<"B"<<endl;
    }
    
}
    return 0;
}
