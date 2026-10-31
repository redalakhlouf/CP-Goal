#include <bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define Fast ios::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
using namespace std;
void solve(){
    ll p ,q;
    cin >> p>> q;
    q%=6;
    if(q==3) q=0,if(p>0)p--;
    if(
}