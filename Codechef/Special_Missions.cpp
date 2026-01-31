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

// ------------------- Print Macros -------------------
#define print(x) cout << (x) << "\n"
#define printline(s) cout << s << "\n"

// ------------------- Main Template -------------------
int main()
{
    fastio;

    int t;
    IN(t);

    while(t--) 
    {
        int n, c;
        IN2(n, c);
        vector<int> v(n);
        INV(v, n);
        string s;
        IN(s);
        int coin = 0;
        loop(i, n)
        {
            if(s[i] == '0')
            {
                coin += v[i];
            }
        }
        int special_sum = 0;
        loop(i, n)
        {
            if(s[i] == '1') special_sum += v[i];
        }
        if(special_sum > 0 && coin >= c && special_sum > c)
        {
            coin = coin - c + special_sum;
        }
        print(coin);
    }
    return 0;
}
