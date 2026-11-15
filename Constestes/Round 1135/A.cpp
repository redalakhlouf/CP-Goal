#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
using namespace std  ;
void solution(){
    int i ;
    cin >> i;
    if(i>3){
        /* bool premi=true; //after i will learn algorithm to calclule solwly the primary
        for(int t=i-1;t >1;t--){
            if(i%t==0){
                premi=false;
            }
        }
        if(!premi){
            for(int j=i ;j>0;j--){
              cout << j << ' ';
            }
            cout << endl;
        }
        else{
            cout << i-1 <<' '<< i << ' ';
            for(int j=i-2 ;j>0;j--){
              cout << j << ' ';
            }
            cout << endl;
        } */
        for(int j=1;j<=i;j++){
            if(j==1) cout << 4 << ' ';
            if(j==4) cout << 1 << ' ';
            else cout << j << ' ';
        }
        }
    
    else {
        cout << -1 <<endl;
    }}
    


int main(){
    
    int t ;
    cin >> t ;
    while(t--){
        solution();
    }
}