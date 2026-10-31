#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    ll num;
    cin >> num;
    string s=to_string(num);
    vector<int> a(n);
    for(int i=1;i<n+1;i++){
        a[i]=s[i]-'0';
    }
    vector<int> pref(n+1);
    pref[0]=0;
    for(int i=1;i<n+1;i++){
        pref[i]=a[i]+pref[i-1]-1;
    }
    int result=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<i+1;j++){
           if(pref[i]==pref[j-1]) result++;
        }
    }
    cout << result<<endl;

}
int main(){
    ios::sync_with_stdio(false),cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}