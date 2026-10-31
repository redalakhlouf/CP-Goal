#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> prefi(n+1);
    prefi[0]=0;
    for(int i=1;i<n+1;i++){
        cin >> prefi[i];
        prefi[i]+=prefi[i-1];
    }
    
}