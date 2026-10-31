#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, k;
    cin >> n >> k;

    ll sum = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    ll re = 1LL * n * k;

    if(sum % 2 == 0 && re % 2 == 1)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main() {
    Fast;

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
}