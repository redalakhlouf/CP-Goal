#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve(){
    string number;
    cin >> number;
    int taille=0;
    ll number_r=0;
    for(char i : number){
        taille++;
    }
    for(int i=0;i<taille;i++){
        number_r+=(int)(number[i]-'0')*pow(10,taille-1-i);
    }
    cout << number_r ;


}
int main(){
    solve();
}