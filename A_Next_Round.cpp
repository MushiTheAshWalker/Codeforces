#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int arr[50];
    cin>>n>>k;
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count=0;
    int max=arr[k-1];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>=max && arr[i]>0)
        {
            count++;
        }
        
    }
    cout << count << endl;
    return 0;


    
}