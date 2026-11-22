#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define Fast ios::sync_with_stdio(false);cin.tie(nullprt);
using namespace std  ;
void solve(){
    ll x;
    cin  >> x;
    cout << (x%4==2?"No":"Yes") << endl ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}