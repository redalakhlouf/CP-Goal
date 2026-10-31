#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std;
void solve(){
    int n;
    ll x;
    cin >> n;
    cin >> x;
    vector<int> a(n+1);
    for(int i=1;i<n+1;i++){
        cin >> a[i];
    }
    vector<ll> pref(n+1);
    pref[0]=0;
    for(int i=1;i<n+1;i++){
        pref[i]=a[i]+pref[i-1];
    }
    ll result=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
            if((pref[i]-pref[j-1])==x) result++;
        }
    }
    cout << result << endl;
}
int main(){
    ios::sync_with_stdio(false),cin.tie(NULL);
    solve();
}