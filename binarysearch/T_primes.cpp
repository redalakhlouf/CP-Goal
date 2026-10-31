#include <bits/stdc++.h>
#define Fast ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define endl '\n'
#define ll long long
using namespace std;
void solve(){
    ll x,T=0;
    cin>>x;

    for(int i=2;i<x;i++){
        if(x%i==0) T++;
        if(T>1){
            cout <<"NO"<<endl;
            return ;
        }
    }
   if(T==0) cout <<"NO"<<endl;
   else cout <<"YES"<<endl;
}
int main(){
    ll t;
    Fast;
    cin>>t;
    while(t--){
        solve();
    }
}