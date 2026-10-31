#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
void solve(){
    int n;
    cin >> n;
    string name;
    cin >> name;
    int result=n;
    if(n%2==0){
        vector<int>v[2]={vector<int>(26,0),vector<int>(26,0)};
        for(int i=0;i<n;i++){
            v[i%2][name[i]-'a']++;
        }
        int max_event=*max_element(v[0].begin(),v[0].end());
        int max_odd=*max_element(v[1].begin(),v[1].end());
        cout << n -(max_event+max_odd) << endl;
    }else{
        vector<int>pref[2]={vector<int>(26,0),vector<int>(26,0)};
        vector<int>suff[2]={vector<int>(26,0),vector<int>(26,0)};
        for(int i=0;i<n;i++){
            pref[i%2][name[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            pref[i%2][name[i]-'a']--;
            int ans=n;
            for(int k=0;k<2;k++){
                int mx=0;
                for(int i=0;i<26;i++){
                    mx=max(mx,pref[k][i]+suff[1-k][i]);
                }
                ans-=mx;
            }
            result=min(result,ans);
           suff[i%2][name[i]-'a']++;
        }
        cout << result << endl;
    }
}
int main(){
    ios::sync_with_stdio(false),cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
    solve();}
}