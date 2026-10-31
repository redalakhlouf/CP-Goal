#include <bits/stdc++.h>
using namespace std ; 
#define ll long long 
#define endl '\n'

void solve(){
    int n ; 
    cin >> n ; 
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i]; 
    }
   int minuim=a[0]+a[n-1];
   if(minuim==0){
    cout << 0 <<endl ;
   }
   else{
    int switchpos=0;
    for(int i=1;i<n-1;i++){
        switchpos+=(a[i]==0)?1:0;
    }
    if(minuim==1){
        if(switchpos>=1){
            cout << 1 << endl ;
        }else{
            cout << -1 << endl ;
        }
    }else if (switchpos>=2){
        cout << 2 << endl;
    }
    else{
        cout <<-1<<endl;
    }
   }
}
int main(){
    ios::sync_with_stdio(false) , cin.tie(NULL);
    int t ; 
    cin >> t;
    while(t--){
       solve();
    }
}