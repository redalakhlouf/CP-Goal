#include <bits/stdc++.h>
# define ll long long 
# define endl '\n'
# define Fast ios::sync_with_stdio(false),cin.tie(NULL)
using namespace std;
void solve(){
    int x,y;
    cin >> x >> y;
    if(x>0 or y<0 ){
        cout << y-x << endl;
    }else if(-x==y+1 or x-1==-y){
        cout << 0 <<endl ;
    }else{
       int x1=min(abs(x),abs(y));
        int y1=max(abs(x),abs(y));
        if(y1!=x1){
            cout << y1-x1-1<<endl;
        }else{
            cout << 0 << endl;
        }

    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

// why it work but i really iterative and if the numbers are not succsifes
