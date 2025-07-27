#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int d1,d2,d3;
    cin>>d1>>d2>>d3;
    long long int k=d1+d3+d2;
    long long int l=d1+d1+d2+d2;
    long long int m=d2+d3+d3+d2;
    long long int n=d1+d3+d3+d1;
    long long int result=min({k,l,m,n}); //min funmction used for get min value
    cout<<result<<endl;
    return 0;
}