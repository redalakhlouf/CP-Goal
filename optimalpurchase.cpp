#include <bits/stdc++.h>
#define ll long long
#define Fast ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
using namespace std;
#define endl '\n'
void solve(){
    ll n,a ,b,minuim=0;
    cin>>n>>a>>b;
    if(b/3<a){
        minuim=(n/3)*b;
        int reset=n-(n/3)*3;
        if(reset*a<b){
            minuim+=reset*a;
        }else{
            minuim+=b;
        }
        cout<<minuim<<endl;
    }
    else{
        cout<<a*n<<endl;
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