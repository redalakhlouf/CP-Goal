#include <bits/stdc++.h>
#define ll long long
#define Fast ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL)
using namespace std;
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int j=0;j<n;j++){
        cin >> b[j];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>b[i]) swap(a[i],b[i]);
        ans+=b[i];
    }
    ans+=b[n-1]+a[n-1];
    cout << ans << endl;
  
 
}
int main(){
    Fast;
    int t ;
    cin>>t;
    
    while(t--){
        solve();
    }}