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

void solve()
{
    int t;
    IN(t);
    while(t--)
    {
        int n, k;
        IN2(n, k);
        if (k <= 2*n){
        int ans = (k+1)/2;
        print(ans);
        }
    else{
        int ans = n + (k - 2*n-1);
        print(ans);
    }
    }
}
// ------------------- Main Template -------------------
int main()
{
    fastio;
    solve();
    return 0;
}