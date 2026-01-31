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
#define printv(v) for(auto &x:v) cout<<x<<" "; cout<<"\n"

// ------------------- Input Macros -------------------
#define IN(a) cin >> a
#define IN2(a,b) cin >> a >> b
#define IN3(a,b,c) cin >> a >> b >> c

#define INV(v,n) loop(i,n) cin >> v[i]
#define INV2D(v,n,m) loop(i,n) loop(j,m) cin >> v[i][j]

// ------------------- Print Macros -------------------
#define print(x) cout << (x) << "\n"
#define printline(s) cout << s << "\n"

// ------------------- MAP + FREQUENCY MACROS -------------------
#define MAP(key, val) map<key, val>
#define UMAP(key, val) unordered_map<key, val>
#define FREQQ(mp, v) for(auto &x : v) mp[x]++;

void solve()
{
    int t;
    IN(t);
    while(t--)
    {
        int n;
        IN(n);
        vector<int> b(n);
        INV(b, n);
        vector<int> a(n);
        int Left = 0, Right = n-1;
        loop(i,n)
        {
            if(i % 2 == 0) 
            {
                a[i] = b[Left];
                Left++;
            }
            else 
            {
                a[i] = b[Right];
                Right--;
            }
        }
        printv(a);
    }
}
int main()
{
    fastio;
    solve();
    return 0;
}
