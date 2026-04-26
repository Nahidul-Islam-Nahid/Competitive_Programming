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

int c_n_k[31][31];

void precompute() 
{
    for (int i = 0; i < 30; ++i) 
    {
        for (int j = 0; j < 30; ++j) 
        {
            if (i < j) 
            {
                c_n_k[i][j] = 0;
            }
            else if (j == 0) 
            {
                c_n_k[i][j] = 1;
            }
            else 
            {
                c_n_k[i][j] = c_n_k[i - 1][j] + c_n_k[i - 1][j - 1];
            }
        }
    }
}

void solve() 
{
    int n, k;
    cin >> n >> k;
    int d = 0;
    while (n % 2 == 0) 
    {
        n /= 2;
        ++d;
    }

    int ans = 0;

    for (int max_bit = 0; max_bit < d; ++max_bit) 
    {
        for (int cnt_bit = 1; cnt_bit <= max_bit + 1; ++cnt_bit) 
        {
            if (max_bit + cnt_bit <= k) 
            {
                continue;
            }
            ans += c_n_k[max_bit][cnt_bit - 1];
        }
    }

    if (d + 1 > k) 
    {
        ++ans;
    }
    cout << ans << endl;
}

int32_t main() 
{
    fastio;
    precompute();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}