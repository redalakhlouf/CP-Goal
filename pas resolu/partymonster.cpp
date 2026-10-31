#include <bits/stdc++.h>
#define Fast ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL)
#define ll long long
using namespace std;
#define endl '\n'
void solve(){
    ll n,S=0;
    cin >>n;
    string s;
    cin >> s;
    for(char c :s){
        if(c=='('){
            S+=1;
        }
        else if(c==')') S=-1;
    }
    if(S==0) cout << "YES"<<endl;
    else cout << "NO"<<endl;
}
int main(){
    ll t;
    Fast;
    cin >>t;
    while(t--){
    solve();
    }
}