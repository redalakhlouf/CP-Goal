#include <bits/stdc+.h>
using namespace std ; 
#define ll long long
#define endl '\n'

void solve(){
    vector<int> a(6);
    for(int i=0;i<6;i++){
        cin << a[i];
    }
    int surface=0;
    for(int i=0;i<3;i++){
        surface+=a[i]*a[i+1];
    }
    if(floor(sqrt(surface))!=sqrt(surface)){
         cout << -1 << endl;
    }
    else{
        int side=sqrt(surface);
        
    }
    
}
int main(){
    ios::sync_with_stdio(false),cin.tie(NULL);
    solve();
    return 0;
}