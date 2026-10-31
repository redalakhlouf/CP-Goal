#include <bits/stdc++.h>
#define ll long long
#define Fast ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL)
using namespace std;
#define endl '\n'
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll minuim=a[(n-1)/2];
    ll result1=0,result2=0;
    result1=a[n-1]-minuim;
    result2=minuim-a[0];
    cout <<max(result1,result2)<<endl;

}
int main(){
    int t ;
    cin>>t;
    Fast;
    while(t--){
        solve();
    }
}