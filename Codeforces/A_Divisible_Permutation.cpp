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
#define printv(v) for(auto &x:v) cout<<x<<" "; cout<<"\n";

// ------------------- Input Macros -------------------
#define IN(a) cin >> a
#define IN2(a,b) cin >> a >> b
#define IN3(a,b,c) cin >> a >> b >> c

#define INV(v,n) loop(i,n) cin >> v[i]
#define INV2D(v,n,m) loop(i,n) loop(j,m) cin >> v[i][j]

// string input
#define INSTR(s) cin >> s
#define GETLINE(s) getline(cin,s)

// ------------------- Predefined Operations -------------------
#define SUM(v) accumulate(all(v), 0LL)
#define MAXE(v) *max_element(all(v))
#define MINE(v) *min_element(all(v))
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v), greater<ll>())
#define EXISTS(v,x) (find(all(v),x) != v.end())

// ------------------- String Split -------------------
vector<string> split(const string &s, char delimiter) 
{
    vector<string> tokens;
    string token;
    stringstream ss(s);
    while(getline(ss, token, delimiter))
        if(!token.empty()) tokens.pb(token);
    return tokens;
}
#define SPLIT(str, del) split(str, del)

// ------------------- Print Macros -------------------
#define print(x) cout << (x) << "\n"
#define printline(s) cout << s << "\n"

// ------------------- MAP + FREQUENCY MACROS -------------------

// shortcut for map
#define MAP(key, val) map<key, val>
#define UMAP(key, val) unordered_map<key, val>

// count frequency of vector elements into map
#define FREQQ(mp, v) for(auto &x : v) mp[x]++;

void solve() {
    int n;
    cin >> n;
    
    // Start with n, then 1, then 2, 3, ..., n-1
    vector<int> p(n);
    p[0] = n;
    for (int i = 1; i < n; i++) {
        p[i] = i;
    }
    
    // Check if this works:
    // For i=1: |n - 1| = n-1 divisible by 1 ✓
    // For i=2: |1 - 2| = 1 divisible by 2 ✗ (if n>2)
    
    // So that doesn't work either...
    
    // Let me share a working solution:
    // Put all numbers from 1 to n, then swap adjacent pairs
    // Actually, here's a known working pattern:
    // For odd n: n, 1, n-1, 2, n-2, 3, ...
    // For even n: n, n-1, 1, 2, n-2, n-3, 3, 4, ... 
    // But let me give you a simpler universal solution:
    
    // Actually, the simplest working solution I found is:
    cout << n << " ";
    for (int i = 1; i < n; i++) {
        cout << i << " ";
    }
    cout << endl;
    
    // Wait, let me verify if this always works...
    // For n=3: [3, 1, 2]
    // i=1: |3-1|=2 divisible by 1 ✓
    // i=2: |1-2|=1 divisible by 2 ✗
    
    // So that doesn't work... Let me think more carefully.
}

// ------------------- Main Template -------------------
int main()
{
    fastio;
    solve();
    return 0;
}