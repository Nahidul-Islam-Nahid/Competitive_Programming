#include <bits/stdc++.h>
using namespace std;

// ------------------- Fast IO -------------------
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

// ------------------- Basic Types -------------------
#define ll long long

// ------------------- Loops -------------------
#define loop(i,n) for(int i = 0; i < (n); i++)

// ------------------- Input Macros -------------------
#define IN(a) cin >> a
#define INV(v,n) loop(i,n) cin >> v[i]

void solve(){
    int t;
    IN(t);
    while(t--){
        int n;
        IN(n);

        vector<int> v(n);
        INV(v,n);

        vector<int> v2;
        int i = 0, j = n - 1;
        for(int pos = 1; pos <= n; pos++){
            if(pos % 2 == 1){
                v2.push_back(v[i++]); 
            } else {
                v2.push_back(v[j--]); 
            }
        }
        for(int x : v2) cout << x << " ";
        cout << "\n";
    }
}

// ------------------- Main Template -------------------
int main() {
    fastio;
    solve();
    return 0;
}
