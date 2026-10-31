#include <bits/stdc++.h>
#define ll long long
#define Fast ios::sync_with_stdio(false), cout.tie(NULL), cin.tie(NULL)
using namespace std;
#define endl '\n'
 

   void solve() {

    ll n;

    string a, b;

    cin >> n >> a >> b;



    int sa = 0, sb = 0;

    bool ok = true;



    for (int i = 0; i < n; i++) {

        if (a[i] == b[i]) {

            int v = (a[i] == '(') ? 1 : -1;

            sa += v;

            sb += v;

        } else {

          

            if (sa < sb) {

                sa++; 

                sb--;

            } else {

                sa--; 

                sb++;

            }

        }



       

        if (sa < 0 || sb < 0) {

            ok = false;

            break;

        }

    }



    if (sa != 0 || sb != 0) ok = false;



    cout << (ok ? "YES" : "NO") << endl;

}

 
int main() {
    ll t;
    Fast;
    cin >> t;
    while (t--) solve();
}