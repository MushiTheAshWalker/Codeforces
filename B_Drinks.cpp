#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,arr[500],sum=0;
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
double x=(double)sum/n;
cout<<fixed<<setprecision(12)<<x<<endl;
return 0;
}