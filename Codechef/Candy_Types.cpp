#include <bits/stdc++.h>
using namespace std;

// ------------------- Fast IO -------------------
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

// ------------------- Loops -------------------
#define loop(i,n) for(int i = 0; i < (n); i++)

// ------------------- Input -------------------
#define IN(a) cin >> a

// ------------------- Print -------------------
#define print(x) cout << x << "\n"

void solve(){
    int n;
    IN(n);
    vector<int> v(n);
    loop(i, n) cin >> v[i];
    map<int,int> mp;
    for(int x : v){
        mp[x]++;
    }
    int ans = -1;
    int mx = 0;
    for(auto it : mp){
        if(it.second > mx){
            mx = it.second;
            ans = it.first;
        }
    }
    print(ans);
}
int main(){
    fastio;
    int t;
    IN(t);
    while(t--){
        solve();
    }
    return 0;
}
