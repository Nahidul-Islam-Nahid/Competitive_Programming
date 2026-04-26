#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e18;
const int MINN = -1e18;

#define int long long
#define uint unsigned long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define mp make_pair

#define fr(n) for(int i = 0; i < n; i++)
#define rfr(n) for(int i = n-1; i >= 0; i--)
#define frr(i,a,b) for(int i = a; i < b; i++)
#define rfrr(i,a,b) for(int i = a - 1; i >= b; i--)

#define in(v,n) vi v(n); for(int i=0; i<n; i++) cin>>v[i];
#define out(v) do { for (auto x : v) cout << x << ' '; cout << '\n'; } while(0)
#define yes cout<<"YES"<<'\n'
#define no cout<<"NO"<<'\n'
#define debug(x) cout << #x << " = " << x << '\n';
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef vector<int> vi;
typedef vector<pair<int,int>> vip;
typedef pair<int,int> pii;
typedef unordered_map<int,int> mi;
typedef map<int,int> mii;

int gcd(int a, int b){ return b ? gcd(b, a%b) : a; }

void solve() 
{
    string a, b; cin >> a >> b;
    int n = a.size();
    int m = b.size();
    if (m < n || m > 2 * n || a[0] != b[0]) 
    {
        no;
        return;
    }
    vi aa, bb;
    int cnt = 1;
    for (int i = 1; i < n; i++) 
    {
        if (a[i] != a[i-1]) 
        {
            aa.push_back(cnt);
            cnt = 1;
        }
        else cnt++;
    }
    aa.push_back(cnt);
    cnt = 1;
    for (int i = 1; i < m; i++) 
    {
        if (b[i] != b[i-1]) 
        {
            bb.push_back(cnt);
            cnt = 1;
        }
        else cnt++;
    }
    bb.push_back(cnt);
    if (aa.size() != bb.size()) 
    {
        no;
        return;
    }
    n = aa.size();
    for (int i = 0; i < n; i++) 
    {
        if (aa[i] > bb[i] || aa[i] * 2 < bb[i]) 
        {
            no;
            return;
        }
    }
    yes;
}

int32_t main() 
{
    fastio;
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}