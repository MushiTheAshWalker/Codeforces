#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int k;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin>>n;
        int arr[n];
        int pos=0;
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            if(arr[0]!=arr[j+1])
            {
                pos=j+1;
                break;
            }
        }
        
        cout<<pos<<endl;
        
    }
 return 0;   
}