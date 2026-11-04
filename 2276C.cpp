#include <bits/stdc++.h>
# define ll long long 
# define endl '\n'
# define Fast ios::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    vector<ll> pref(n);
    pref[0]=a[0];
    for(int i=1;i<n;i++){
     pref[i]=pref[i-1]+a[i];
    }
    ll result=0;
    int i=0;
    int j=k; // pourqoui k et pas K
    while(j<n){
        for(int l=j;l<n;l++){
          if(i==0){
            if(pref[l]%k==0){
                result++;
            }
          }else{
            if((pref[l]-pref[i-1])%k==0){
                result++;
            }
          }
        }
        i++,j++;
    }
    cout << result <<endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
