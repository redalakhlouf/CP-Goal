#include <bits/stdc++.h>
#define ll long long 
#define Fast ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
using namespace std;
void solve(){
    int n , m ;
    cin >> n >> m ;
    string p,q;
    cin >> p >> q;
    bool found=true;
    if(n-3!=m){
        cout << "NO"<< endl;
    }
    else{
     unordered_map<char,int> mp;
     unordered_map<char,int> mq;
     for(int k=0;k<n;k++){
        mp[p[k]]++;
     }
     for(int l=0;l<m;l++){
        mq[q[l]]++;
     }
     
    for(char c='a';c<='z';c++){
        int need= (c=='s'|| c=='i' || c=='x') ? 1:0;  // error = instead of ==
        if(mp[c]-mq[c]!=need) found =false;
    }

    if(found==false){
        cout << "NO" << endl;
    }else{
        cout << "YES" <<endl;
    }
     
    }}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}