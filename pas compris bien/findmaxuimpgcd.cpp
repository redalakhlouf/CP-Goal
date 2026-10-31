#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // ETAPE 1 : construire prefix_gcd
    vector<long long> prefix(n), suffix(n);

    prefix[0] = a[0];
    for(int i = 1; i < n; i++)
        prefix[i] = __gcd(prefix[i-1], a[i]);

    // ETAPE 2 : construire suffix_gcd
    suffix[n-1] = a[n-1];
    for(int i = n-2; i >= 0; i--)
        suffix[i] = __gcd(suffix[i+1], a[i]);

    // ETAPE 3 : pour chaque i, calculer GCD sans a[i]
    long long ans = 0;
    for(int i = 0; i < n; i++){
        long long g = 0;
        if(i > 0)   g = __gcd(g, prefix[i-1]);  // partie gauche
        if(i < n-1) g = __gcd(g, suffix[i+1]);  // partie droite
        ans = max(ans, g);
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}