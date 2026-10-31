#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    string name;
    cin >> n;
    cin >> name;
    if(n%2==0){
        unordered_map<char , int> pair_dic,impair_dic;
        int max_pair=0,max_impair=0;
        for(int i=0;i<n/2;i++){
         pair_dic[name[2*i]]++;
        }
        for(int i=0;i<=n/2-1;i++){
         impair_dic[name[2*i+1]]++;
        }
        for(const auto& paire:impair_dic){
             max_impair=max(max_impair,paire.second);
        }
        for(const auto& paire:pair_dic){
             max_pair=max(max_pair,paire.second);
        }
        cout << n-(max_impair+max_pair) <<endl;}
    else if(n==1){
        cout << 1 << endl;
    }
    else{
        int result;
        for(int i=0;i<n;i++){
            int temp_result;
            string temp_name=name;
           string temp=temp_name.erase(i,1);
           unordered_map<char,int> pair_dict,impair_dict;
           for(int i=0;i<(n-1)/2;i++){
            pair_dict[temp[2*i]]++;
           }
           for(int i=0;i<=(n-1)/2-1;i++){
            impair_dict[temp[2*i+1]]++;
           }
           int max_pair=0,max_impair=0;
           for(const auto& paire:pair_dict){
            max_pair=max(max_pair,paire.second);
           }
           for(const auto& paire:impair_dict){
            max_impair=max(max_impair,paire.second);
           }
           temp_result=n-(max_impair+max_pair);
           if(i==0) result=temp_result;
           if(i!=0) result=min(result,temp_result);

        }
        cout << result << endl;
        
    }

}
int main(){
    ios::sync_with_stdio(false),cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
}