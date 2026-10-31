#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define Fast ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    map<int ,int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    auto best=max_element(freq.begin(),freq.end(),[](auto&a,auto&b){return a.second<b.second;});
    int ma=best->first;
    int repo=n/2-(best->second);
    cout << repo<<endl;

}
int main(){
    Fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}