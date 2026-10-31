#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define Fast ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
using namespace std;
void solve(){
    Fast;
    int n,q;
    cin >> n>>q;
    vector<ll> a(n),prefix(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    prefix[0]=a[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
    }
    for(int i=0;i<q;i++){
        int l,r;
        cin >> l>>r;
       if(l!=0){
        cout << prefix[r-1]-prefix[l-1]<<endl;
       }
       else{
        cout <<prefix[r-1]<<endl;
       }
    }


}
int main(){
    solve();
}