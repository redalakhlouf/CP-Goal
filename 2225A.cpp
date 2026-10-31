#include <bits/stdc++.h>
#define ll long long 
#define Fast ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL)
#define endl '\n'
using namespace std;
void solve(){
    ll x,y;
    cin >> x>>y;
    bool ok=false;
    if(y-x>0){
        ll re=x,su=2;
        while(re*su<y){
            if(y%(re*su)!=0){
                ok=true;
                break;
            }
            su+=1;
        }
    }
    if(ok) cout << "YES"<<endl;
    else cout << "NO"<<endl;
}
int main(){
    Fast;
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}