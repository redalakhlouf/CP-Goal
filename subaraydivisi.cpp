#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    vector<ll> a(n+1);
    for(int i=1;i<n+1;i++){
        cin >> a[i];
    }
    vector<ll> prefi(n+1);
    prefi[0]=0;
    for(int i=1;i<n+1;i++){
        prefi[i]=a[i]%n+prefi[i-1];
    }
    ll result=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
            if((prefi[i]-prefi[j-1])%n==0){
                result++;
            }
        }
    }
    cout << result << endl;
    
}
int main(){
    ios::sync_with_stdio(false),cin.tie(NULL);
    solve();
}