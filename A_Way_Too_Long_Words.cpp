#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,p1,p2;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        int t=s.size();
        if (t<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            p1=s.substr(0,1);
            p2=s[t-1];
            int k =t-2;
             cout<<p1<<k<<p2<<endl;
        }
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int tt;
//     cin >> tt;
//     while(tt--){
//     string s;
//     cin >> s;
//     int count=0;
//     for(int i=1;i<s.size()-1;i++){
//         count++;
//     }
//     if(s.size()<=10){
//         cout<<s<<endl;
//     }
//     else
//     cout<<s[0]<<count<<s[s.size()-1]<<endl;
// }
// }