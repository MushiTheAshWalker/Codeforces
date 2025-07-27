#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int arr[3]={x1,x2,x3};
    sort(arr,arr+3);
    int a=arr[1]-arr[0];
    int b=arr[2]-arr[1];
    int c=a+b;
    cout<<c<<endl;
    return 0;
    
}