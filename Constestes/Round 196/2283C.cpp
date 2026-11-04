// i didn't really write this but i will try to understand it and see if it possible to how figure it 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int noTsts;
    scanf("%d", &noTsts);
    while (noTsts--) {
        int n;
        scanf("%d", &n);

        // m0 = XOR de 1..n (sans doublement)
        int m0 = 0;
        for (int i = 1; i <= n; i++) m0 ^= i;

        // plus haut bit p de n
        int p = 31 - __builtin_clz(n);
        int T = (1 << (p + 2)) - 2;   // 2k

        // base XOR
        const int B = 21;
        int bas[B], cm[B];            // vecteur, masque des éléments utilisés
        for (int i = 0; i < B; i++) bas[i] = cm[i] = 0;
        vector<int> ids;              // ids[j] = élément ayant créé le j-ième vecteur de base

        for (int x = 1; x <= n; x++) {
            int v = x ^ (2 * x);      // levier de x
            int mask = 0;
            for (int b = B - 1; b >= 0; b--) {
                if (!((v >> b) & 1)) continue;
                if (bas[b]) {
                    v ^= bas[b];
                    mask ^= cm[b];
                } else {
                    int idx = ids.size();
                    ids.push_back(x);
                    bas[b] = v;
                    cm[b] = mask ^ (1 << idx);
                    break;
                }
            }
        }

        vector<int> d(n + 1, 0);
        bool done = false;
        for (int add = 0; add < 2 && !done; add++) {
            int goal = m0 ^ (T + add);   // ce que doit valoir le XOR des leviers
            int mask = 0;
            for (int b = B - 1; b >= 0; b--) {
                if (!((goal >> b) & 1)) continue;
                if (!bas[b]) break;       // impossible avec cette cible
                goal ^= bas[b];
                mask ^= cm[b];
            }
            if (goal == 0) {
                for (int j = 0; j < (int)ids.size(); j++)
                    if ((mask >> j) & 1) d[ids[j]] = 1;
                done = true;
            }
        }

        for (int i = 1; i <= n; i++) printf("%d ", d[i]);
        printf("\n");
    }
    return 0;
}