#include <bits/stdc++.h>
#define ll long long 
#define Fast ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
     vector<int> a(3);
     string result;
     for(int i=0;i<3;i++){
        cin >> a[i];
     }
    int total=a[0]+a[1]+a[2];
    if(a[0]>=a[1]){
        result=string(total,'P');
    }else if (a[1]>=a[2]){
        result=string(total,'R');
    }else{
        result=string(total,'S');
    }
     cout << result << endl ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}