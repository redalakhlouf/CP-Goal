#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define Fast ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
using namespace std;
void solve(){
    int n,q;
    cin >>n >> q;
    vector<tuple<int ,int ,int>> a(n);
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp==1) a[i]={1,0,0};
        else if(temp==2) a[i]={0,1,0};
        else a[i]={0,0,1};
    }
    for(int i=1;i<n;i++){
        get<0>(a[i])+=get<0>(a[i-1]);
        get<1>(a[i])+=get<1>(a[i-1]);
        get<2>(a[i])+=get<2>(a[i-1]);
        
    }
    for(int j=0;j<q;j++){
        int A,b;
        cin >> A>>b;
        if(A!=1){
            int a1=get<0>(a[b-1])-get<0>(a[A-2]);
            int a2=get<1>(a[b-1])-get<1>(a[A-2]);
            int a3=get<2>(a[b-1])-get<2>(a[A-2]);
            cout << a1 <<" "<< a2<< " "<< a3<<endl;
            
        }
        else{
            int a1=get<0>(a[b-1]);
            int a2=get<1>(a[b-1]);
            int a3=get<2>(a[b-1]);
            cout << a1<<" "<< a2<<" " <<a3 <<endl;
        }

    }
}
int main(){
    Fast;
    freopen("bcount.in",  "r", stdin);   // ✅ lire depuis le fichier
    freopen("bcount.out", "w", stdout);  // ✅ écrire dans le fichier
    solve();
}