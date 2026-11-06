#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define Fast ios::sync_with_stdio(false),cin.tie(Null)
using namespace std  ;
void solve(){
    int n  ; 
    cin >> n  ; 
    ll h , l ;
    l=0;
    h=0;
    ll sum=0;
    vector<int> cnt(25,0);
    for(int i=0;i<n;i++){
        int ai;
        cin >> ai ;
        cnt[ai]++;
        sum+=1LL<< ai;
    }
    for(int t=24;t>-1;t--){
        while(cnt[t]>0){
            ll value= 1ll << t;
            if(l+value<=sum/2){
                l+=value;
                cnt[t]--;
            }else{
            break;
        }}
    }
    

    cout << l*(sum-l) << endl;

}
int main(){
    
    int t ; 
    cin >> t;
    while(t--){
        solve();
    }
}
