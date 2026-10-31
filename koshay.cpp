#include <bits/stdc++.h>
#define Fast ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL)
#define ll long long
#define endl '\n'
using namespace std;
void solve(){
    ll x,y;
    cin >> x >> y;
    if (x%2==0 && y%2==0){
        cout << "YES"<<endl;
    }else if(x%2==0 && y%2==1){
        cout << "YES"<<endl;
    }else if(x%2==1 && y%2==0){
        cout << "YES"<<endl;
    }else{
        cout << "NO"<<endl;
    }
}
int main(){
    Fast;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}