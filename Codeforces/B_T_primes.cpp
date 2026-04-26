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

const int LIMIT = 1000001;
bool is_prime[LIMIT];

void sieve() 
{
    fill(is_prime, is_prime + LIMIT, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p < LIMIT; p++) 
    {
        if (is_prime[p]) 
        {
            for (int i = p * p; i < LIMIT; i += p)
                is_prime[i] = false;
        }
    }
}

void solve() 
{
    int x;
    cin >> x;
    int root = round(sqrt(x));
    if (x > 1 && root * root == x && is_prime[root]) 
    {
        yes;
    } else 
    {
        no;
    }
}

int32_t main() 
{
    fastio;
    sieve();
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}