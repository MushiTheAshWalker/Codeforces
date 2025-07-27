#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int count=0;
        cin>>a>>b>>c>>d;
        int arr[4]={a,b,c,d};
        for(int j=0;j<4;j++){
        if (arr[0]<arr[j])
        {
            count++;
        }
    }
     cout<<count<<endl;
    }
    return 0;
}