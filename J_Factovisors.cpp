#include<bits/stdc++.h>
using namespace std;
void solve(long long int n,long long int m){
    long long int f=1;
    bool ok=false;
    for(long long int i=2;i<=n;i++){
        f=((__int128_t)f*i)%m;
        if(f==0){
           ok=true;
           break;
        }
    }
    if(ok){
       
        cout<<m<<" "<<"divides"<<" "<<n<<"!"<<endl;
    }
    else 
    
    cout<<m<<" does not divide "<<n<<"!"<<endl;
    
}
int main(){
  long long int n,m;
   while(cin >> n >> m && n!=EOF){
    solve(n,m);
     
   }
}

