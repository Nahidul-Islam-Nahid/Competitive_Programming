#include <bits/stdc++.h>
using namespace std;

// ------------------- Fast IO -------------------
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

// ------------------- Basic Types -------------------
#define ll long long
#define ull unsigned long long

// ------------------- Loops -------------------
#define loop(i,n) for(int i = 0; i < (n); i++)
#define range(i,l,r) for(int i = (l); i <= (r); i++)

// ------------------- Vector & Array -------------------
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back

void solve() {
    int n, m;
    cin >> n >> m;

    int minMoves = (n + 1) / 2;  // ceil(n/2)// kaj hoiya gese i guess
    int maxMoves = n;

    for (int moves = minMoves; moves <= maxMoves; moves++) {
        if (moves % m == 0) {
            cout << moves << "\n";
            return; 
        }
    }
    cout << -1 << "\n";
}

// ------------------- Main -------------------
int main() {
    fastio;
    solve();
    return 0;
}
