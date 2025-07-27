#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m=a+b*c;
    int j=a*(b+c);
    int k=a*b*c;
    int l=(a+b)*c;
    int t=a+b+c;
    int n=a*b+c;
    int o=a*(b+c);
    int arr[7]={m,j,k,l,t,n,o};
    int max=arr[0];
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    cout<<max<<endl;
    return 0;
    
}