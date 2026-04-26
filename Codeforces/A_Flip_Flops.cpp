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
    int n, c, k;
    cin >> n >> c >> k;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(all(a));
    
    for (int i = 0; i < n; i++) 
    {
        if (a[i] <= c) 
        {
            c += a[i];  // kill for free
        } 
        else 
        {
            int need = a[i] - c;  // flip flops needed to reduce a[i] to c
            if (need <= k) 
            {
                k -= need;
                c += a[i] - need;  // gain reduced monster's power
            } 
            else 
            {
                break;
            }
        }
    }

    cout << c << '\n';
}


int32_t main() 
{
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}