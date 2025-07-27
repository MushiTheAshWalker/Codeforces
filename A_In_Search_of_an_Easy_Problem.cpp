#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[102];
    int count=0,count1=0;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
        for (int i = 0; i < n; i++)
        {
       if (arr[i]==0)
        {
            count++;
        }
        else
        {
            count1++;
        }
        }
    if (count1==0)
    {
        cout<<"EASY"<<endl;
    }
    else
    {
        cout<<"HARD"<<endl;
    }
    
    return 0;
}