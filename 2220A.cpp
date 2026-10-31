#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define Fast ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
using namespace std;
void solve(){
    int n;
    cin >> n;
    bool ok=true;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int j=0;j<n-1;j++){
        if(a[j]==a[j+1]){
          ok=false;
          break;
        } }
    if(ok){
        for(int i=n-1;i>-1;i--){
            if(i%2==0){
                cout << a[n-1-i] << " ";
            }else{
                 cout << a[i] <<" " ;
            }
           
        }
        cout << endl;
    }
    else{
        cout << -1;
    }

  
}
  int main(){
        Fast;
        int t;
        cin >>t;
        while(t--){
            solve();
        }
    }
