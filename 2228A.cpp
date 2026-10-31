#include <bits/stdc++.h>
#define ll long long 
#define Fast ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int cn[3]={0,0,0};
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==0){
            cn[0]++;
        }else if(a[i]==1){
            cn[1]++;
        }
        else{
            cn[2]++;
        }
    }
    int max=0;
    int pair=min(cn[1],cn[2]);
    max+=pair;
    cn[1]-=pair;
    cn[2]-=pair;
    max+=cn[0]+(cn[1]/3)+(cn[2]/3);
    

   
   
    
    cout << max << endl;
}
int main(){
    Fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}