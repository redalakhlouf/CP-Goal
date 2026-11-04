#include <bits/stdc++.h>
#define ll long long 
#define Fast ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i=0;i<n ; i++){
        cin >> a[i];
    }
    
    int max_divisor=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]%a[i]==0){
                count++;
            }
        }
        max_divisor=max(max_divisor,count);
    }
    
    /*int max_divisor=max_element(freq.begin(),freq.end(),[](const auto& a , const auto& b ){return a.second<b.second}) -> second;*/
    cout << n - max_divisor << endl;

}
int main(){
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
}
// demontre of the if and only if 
