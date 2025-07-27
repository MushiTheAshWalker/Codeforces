#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    for (int i = 0; i <n; i++)
    {
        cin>>a>>b>>c;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        cout<<arr[1]<<" "<<endl;
        
    }
    return 0;
}